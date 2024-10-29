#include "motor_controller/motor_controller_node.hpp"
#include <iostream>
#include <string>

MotorControllerNode::MotorControllerNode() 
    : Node("motor_controller_node") {
    // Initialize publishers
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10))
                    .durability(RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
                    .reliability(RMW_QOS_POLICY_RELIABILITY_RELIABLE);
    dc_command_pub_ = this->create_publisher<motor_controller::msg::Dccommand>("dc_command", qos);
    stepper_command_pub_ = this->create_publisher<motor_controller::msg::StepperCommand>("stepper_command", qos);
    unitree_command_pub_ = this->create_publisher<motor_controller::msg::UnitreeCommand>("unitree_command", qos);

    // Initialize subscribers
    dc_command_sub_ = this->create_subscription<motor_controller::msg::Dccommand>(
        "dc_command", 10, std::bind(&MotorControllerNode::dc_command_callback, this, std::placeholders::_1));
    stepper_command_sub_ = this->create_subscription<motor_controller::msg::StepperCommand>(
        "stepper_command", 10, std::bind(&MotorControllerNode::stepper_command_callback, this, std::placeholders::_1));
    unitree_command_sub_ = this->create_subscription<motor_controller::msg::UnitreeCommand>(
        "unitree_command", 10, std::bind(&MotorControllerNode::unitree_command_callback, this, std::placeholders::_1));
}

void MotorControllerNode::publish_commands() {
    std::string command_type;
    std::cout << "\nEnter command type (dc/stepper/unitree/quit): ";
    std::cin >> command_type;

    if (command_type == "quit") {
        rclcpp::shutdown();
        return;
    }

    if (command_type == "dc") {
        auto dc_command = motor_controller::msg::Dccommand();
        std::cout << "Enter motorbl value: ";
        std::cin >> dc_command.motorbl;
        std::cout << "Enter motorbr value: ";
        std::cin >> dc_command.motorbr;
        std::cout << "Enter motorfl value: ";
        std::cin >> dc_command.motorfl;
        std::cout << "Enter motorfr value: ";
        std::cin >> dc_command.motorfr;

        dc_command_pub_->publish(dc_command);
        std::cout << "Published DC command\n";
    } else if (command_type == "stepper") {
        auto stepper_command = motor_controller::msg::StepperCommand();
        std::cout << "Enter stepsl value: ";
        std::cin >> stepper_command.stepsl;
        std::cout << "Enter stepr value: ";
        std::cin >> stepper_command.stepr;

        stepper_command_pub_->publish(stepper_command);
        std::cout << "Published Stepper command\n";
    } else if (command_type == "unitree") {
        auto unitree_command = motor_controller::msg::UnitreeCommand();
        std::cout << "Enter q value: ";
        std::cin >> unitree_command.q;
        std::cout << "Enter dq value: ";
        std::cin >> unitree_command.dq;
        std::cout << "Enter tau value: ";
        std::cin >> unitree_command.tau;
        std::cout << "Enter kp value: ";
        std::cin >> unitree_command.kp;
        std::cout << "Enter kd value: ";
        std::cin >> unitree_command.kd;

        unitree_command_pub_->publish(unitree_command);
        std::cout << "Published Unitree command\n";
    } else {
        std::cout << "Invalid command type. Please enter dc, stepper, or unitree.\n";
    }
}

void MotorControllerNode::dc_command_callback(const motor_controller::msg::Dccommand::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received DC command: bl=%d, br=%d, fl=%d, fr=%d", 
                msg->motorbl, msg->motorbr, msg->motorfl, msg->motorfr);
}

void MotorControllerNode::stepper_command_callback(const motor_controller::msg::StepperCommand::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received Stepper command: stepsl=%d, stepr=%d", 
                msg->stepsl, msg->stepr);
}

void MotorControllerNode::unitree_command_callback(const motor_controller::msg::UnitreeCommand::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received Unitree command: q=%f, dq=%f, tau=%f, kp=%f, kd=%f", 
                msg->q, msg->dq, msg->tau, msg->kp, msg->kd);
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MotorControllerNode>();
    RCLCPP_INFO(node->get_logger(), "Motor Controller Node started.");    
    
    // Run the publish commands in a loop
    while (rclcpp::ok()) {
        node->publish_commands();
        rclcpp::spin_some(node);
    }
    
    rclcpp::shutdown();
    return 0;
}
