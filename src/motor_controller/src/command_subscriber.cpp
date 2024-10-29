#include "rclcpp/rclcpp.hpp"
#include "motor_controller/msg/dccommand.hpp"
#include "motor_controller/msg/stepper_command.hpp"
#include "motor_controller/msg/unitree_command.hpp"

class CommandSubscriber : public rclcpp::Node {
public:
    CommandSubscriber() : Node("command_subscriber") {
        dc_command_sub_ = this->create_subscription<motor_controller::msg::Dccommand>(
            "dc_command", 10, std::bind(&CommandSubscriber::dc_command_callback, this, std::placeholders::_1));
        stepper_command_sub_ = this->create_subscription<motor_controller::msg::StepperCommand>(
            "stepper_command", 10, std::bind(&CommandSubscriber::stepper_command_callback, this, std::placeholders::_1));
        unitree_command_sub_ = this->create_subscription<motor_controller::msg::UnitreeCommand>(
            "unitree_command", 10, std::bind(&CommandSubscriber::unitree_command_callback, this, std::placeholders::_1));
    }

private:
    void dc_command_callback(const motor_controller::msg::Dccommand::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received DC command: bl=%d, br=%d, fl=%d, fr=%d", 
                    msg->motorbl, msg->motorbr, msg->motorfl, msg->motorfr);
    }

    void stepper_command_callback(const motor_controller::msg::StepperCommand::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received Stepper command: stepsl=%d, stepr=%d", 
                    msg->stepsl, msg->stepr);
    }

    void unitree_command_callback(const motor_controller::msg::UnitreeCommand::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received Unitree command: q=%f, dq=%f, tau=%f, kp=%f, kd=%f", 
                    msg->q, msg->dq, msg->tau, msg->kp, msg->kd);
    }

    rclcpp::Subscription<motor_controller::msg::Dccommand>::SharedPtr dc_command_sub_;
    rclcpp::Subscription<motor_controller::msg::StepperCommand>::SharedPtr stepper_command_sub_;
    rclcpp::Subscription<motor_controller::msg::UnitreeCommand>::SharedPtr unitree_command_sub_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto subscriber = std::make_shared<CommandSubscriber>();
    rclcpp::spin(subscriber);
    rclcpp::shutdown();
    return 0;
}
