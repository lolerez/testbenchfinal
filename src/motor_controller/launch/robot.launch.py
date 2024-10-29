# launch/robot.launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='motor_controller',
            executable='gpio_subscriber_node',
            name='gpio_subscriber',
            output='screen',
        )
    ])
    