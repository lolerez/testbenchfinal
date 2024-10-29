#ifndef MOTOR_CONTROLLER_NODE_HPP
#define MOTOR_CONTROLLER_NODE_HPP

#include "rclcpp/rclcpp.hpp"
#include "motor_controller/msg/dccommand.hpp"
#include "motor_controller/msg/stepper_command.hpp"
#include "motor_controller/msg/unitree_command.hpp"

class MotorControllerNode : public rclcpp::Node {
public:
    MotorControllerNode();
    void publish_commands();

private:
    rclcpp::Publisher<motor_controller::msg::Dccommand>::SharedPtr dc_command_pub_;
    rclcpp::Publisher<motor_controller::msg::StepperCommand>::SharedPtr stepper_command_pub_;
    rclcpp::Publisher<motor_controller::msg::UnitreeCommand>::SharedPtr unitree_command_pub_;

    rclcpp::Subscription<motor_controller::msg::Dccommand>::SharedPtr dc_command_sub_;
    rclcpp::Subscription<motor_controller::msg::StepperCommand>::SharedPtr stepper_command_sub_;
    rclcpp::Subscription<motor_controller::msg::UnitreeCommand>::SharedPtr unitree_command_sub_;

    void dc_command_callback(const motor_controller::msg::Dccommand::SharedPtr msg);
    void stepper_command_callback(const motor_controller::msg::StepperCommand::SharedPtr msg);
    void unitree_command_callback(const motor_controller::msg::UnitreeCommand::SharedPtr msg);
};

#endif  // MOTOR_CONTROLLER_NODE_HPP
