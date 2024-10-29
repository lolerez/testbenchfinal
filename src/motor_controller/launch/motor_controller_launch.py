import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='motor_controller',
            executable='motor_controller_node',
            name='motor_controller_node',
            output='screen'
        ),
    ])


#likely very fake!