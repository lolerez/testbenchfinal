#include "motor_controller/gpio_subscriber_node.hpp"
#include <serial/serial.h>
using namespace serial;

GPIOSubscriberNode::GPIOSubscriberNode()                                                            // constructor for gpiosubscribernode
    : Node("gpio_subscriber_node")                                                  // initializes this node with namespace
{
    RCLCPP_INFO(this->get_logger(), "Initializing GPIO Subscriber Node...");            // ross2 logger (important)

    // Initialize serial communication
    serial_port_.setPort("/dev/ttyUSB1");                                               // check for rights at user level
    serial_port_.setBaudrate(115200);                                                       
    serial_port_.open();                                                                // run in a loop for error checking

    // Create subscribers with QoS settings
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10))
        .reliable()
        .transient_local();

    // Initialize subscribers
    dc_sub_ = this->create_subscription<motor_controller::msg::Dccommand>(
        "dc_command", qos,
        std::bind(&GPIOSubscriberNode::dc_callback, this, std::placeholders::_1)
    );

    stepper_sub_ = this->create_subscription<motor_controller::msg::StepperCommand>(
        "stepper_command", qos,
        std::bind(&GPIOSubscriberNode::stepper_callback, this, std::placeholders::_1)
    );

    unitree_sub_ = this->create_subscription<motor_controller::msg::UnitreeCommand>(
        "unitree_command", qos,
        std::bind(&GPIOSubscriberNode::unitree_callback, this, std::placeholders::_1)
    );

    RCLCPP_INFO(this->get_logger(), "GPIO Subscriber Node initialized successfully");
}

GPIOSubscriberNode::~GPIOSubscriberNode() {
    serial_port_.close();
}

void GPIOSubscriberNode::dc_callback(const motor_controller::msg::Dccommand::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received DC command: bl=%d, br=%d, fl=%d, fr=%d",
                msg->motorbl, msg->motorbr, msg->motorfl, msg->motorfr);
    
    // Send the data over the serial port
    std::stringstream ss;
    ss << "DC," << msg->motorbl << "," << msg->motorbr << "," << msg->motorfl << "," << msg->motorfr << "\n";
    serial_port_.write(ss.str());
}

void GPIOSubscriberNode::stepper_callback(const motor_controller::msg::StepperCommand::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received Stepper command: stepsl=%d, stepr=%d",
                msg->stepsl, msg->stepr);
    
    // Send the data over the serial port
    std::stringstream ss;
    ss << "STEPPER," << msg->stepsl << "," << msg->stepr << "\n";
    serial_port_.write(ss.str());
}

void GPIOSubscriberNode::unitree_callback(const motor_controller::msg::UnitreeCommand::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received Unitree command: q=%.2f, dq=%.2f, tau=%.2f, kp=%.2f, kd=%.2f",
                msg->q, msg->dq, msg->tau, msg->kp, msg->kd);
    
    // Send the data over the serial port
    std::stringstream ss;
    ss << "UNITREE," << msg->q << "," << msg->dq << "," << msg->tau << "," << msg->kp << "," << msg->kd << "\n";
    serial_port_.write(ss.str());
}