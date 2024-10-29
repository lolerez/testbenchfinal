// motor_controller/src/gpio_subscriber_main.cpp
#include <rclcpp/rclcpp.hpp>
#include <memory>
#include "motor_controller/gpio_subscriber_node.hpp"

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GPIOSubscriberNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}