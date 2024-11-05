#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from motor_controller.msg import Dccommand, StepperCommand, UnitreeCommand
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
from std_msgs.msg import Float64MultiArray
from controller_manager_msgs.srv import SwitchController

class GPIOSubscriberNode(Node):
    def __init__(self):
        super().__init__('gpio_subscriber_node')
        self.get_logger().info('Initializing GPIO Subscriber Node...')

        # Create QoS profile
        qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL
        )

        # Initialize subscribers for custom messages
        self.dc_sub = self.create_subscription(
            Dccommand,
            'dc_command',
            self.dc_callback,
            qos
        )

        self.stepper_sub = self.create_subscription(
            StepperCommand,
            'stepper_command',
            self.stepper_callback,
            qos
        )

        self.unitree_sub = self.create_subscription(
            UnitreeCommand,
            'unitree_command',
            self.unitree_callback,
            qos
        )

        # Publishers for controller command interfaces
        self.dc_publisher = self.create_publisher(
            Float64MultiArray,
            '/dc_controller/commands',
            10
        )

        self.stepper_publisher = self.create_publisher(
            Float64MultiArray,
            '/stepper_controller/commands',
            10
        )

        self.unitree_publisher = self.create_publisher(
            Float64MultiArray,
            '/unitree_controller/commands',
            10
        )

        self.get_logger().info('GPIO Subscriber Node initialized successfully')

    def dc_callback(self, msg):
        """Convert DC commands to controller commands."""
        command_msg = Float64MultiArray()
        command_msg.data = [
            float(msg.motorbl),
            float(msg.motorbr),
            float(msg.motorfl),
            float(msg.motorfr)
        ]
        self.dc_publisher.publish(command_msg)
        self.get_logger().info(
            f'Forwarded DC command: bl={msg.motorbl}, br={msg.motorbr}, '
            f'fl={msg.motorfl}, fr={msg.motorfr}'
        )

    def stepper_callback(self, msg):
        """Convert stepper commands to controller commands."""
        command_msg = Float64MultiArray()
        command_msg.data = [float(msg.stepsl), float(msg.stepr)]
        self.stepper_publisher.publish(command_msg)
        self.get_logger().info(
            f'Forwarded Stepper command: stepsl={msg.stepsl}, stepr={msg.stepr}'
        )

    def unitree_callback(self, msg):
        """Convert Unitree commands to controller commands."""
        command_msg = Float64MultiArray()
        command_msg.data = [msg.q, msg.dq, msg.tau, msg.kp, msg.kd]
        self.unitree_publisher.publish(command_msg)
        self.get_logger().info(
            f'Forwarded Unitree command: q={msg.q:.2f}, dq={msg.dq:.2f}, '
            f'tau={msg.tau:.2f}, kp={msg.kp:.2f}, kd={msg.kd:.2f}'
        )

def main(args=None):
    rclpy.init(args=args)
    node = GPIOSubscriberNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()