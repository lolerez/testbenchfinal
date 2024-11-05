import os

from ament_index_python.packages import get_package_share_directory  # type: ignore
from launch import LaunchDescription 
from launch.actions import IncludeLaunchDescription, TimerAction, RegisterEventHandler  # type: ignore
from launch.launch_description_sources import PythonLaunchDescriptionSource  # type: ignore
from launch.substitutions import LaunchConfiguration, Command  # type: ignore
from launch.event_handlers import OnProcessStart  # type: ignore
from launch_ros.actions import Node  # type: ignore

def generate_launch_description():
    # Include the robot_state_publisher launch file, provided by our own package. Force sim time to be enabled
    # !!! MAKE SURE YOU SET THE PACKAGE NAME CORRECTLY !!!
 
    use_sim_time = LaunchConfiguration('use_sim_time', default='false') 

    package_name = 'terratrek_robot'  # <--- CHANGE ME

    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(package_name),  # Use package_name variable here
            'launch','rsp.launch.py'
        )]),
        launch_arguments={'use_sim_time': 'true', 'use_ros2_control': 'true'}.items()
    )

    robot_description = Command(['ros2 param get --hide-type /robot_state_publisher robot_description'])

    controller_params_file = os.path.join(get_package_share_directory(package_name), 'config', 'my_controllers.yaml')

    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[{'robot_description': robot_description}, controller_params_file]
    )

    delayed_controller_manager = TimerAction(period=3.0, actions=[controller_manager])

    controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["skid_cont", "joint_broad"],
    )

    delayed_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=controller_manager,
            on_start=[controller_spawner],
        )
    )

    twist_mux_params = os.path.join(get_package_share_directory(package_name), 'config', 'twist_mux.yaml')
    twist_mux = Node(
        package="twist_mux",
        executable="twist_mux",
        parameters=[twist_mux_params, {'use_sim_time': True}],
        remappings=[('/cmd_vel_out', '/skid_cont/cmd_vel_unstamped')]
    )

    gpio_subscriber_node = Node(
        package='terratrek_robot',  # Your current package name
        executable='gpio_launch_subscriber.py',  # Your current executable name
        name='gpio_subscriber_node',  # Optional, but good to have
        parameters=[{'use_direct_gpio': False}],  # set to true if direct pi gpio control
        output='screen',
    )

    # Launch them all!
    return LaunchDescription([
        rsp,
        twist_mux,
        delayed_controller_manager,
        delayed_controller_spawner,
        gpio_subscriber_node,  # Include your GPIO subscriber node here
    ])
