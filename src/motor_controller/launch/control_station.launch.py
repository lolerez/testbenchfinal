# launch/control_station.launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='motor_controller',
            executable='motor_controller_node',
            name='motor_controller',
            output='screen',
        )
    ])

