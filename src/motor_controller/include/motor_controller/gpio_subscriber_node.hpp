#ifndef GPIO_SUBSCRIBER_NODE_HPP
#define GPIO_SUBSCRIBER_NODE_HPP

#include "rclcpp/rclcpp.hpp"
#include "motor_controller/msg/dccommand.hpp"
#include "motor_controller/msg/stepper_command.hpp"
#include "motor_controller/msg/unitree_command.hpp"

// Only include pigpio if USE_PIGPIO is defined
#ifdef USE_PIGPIO
#include <pigpio.h>
#endif

class GPIOSubscriberNode : public rclcpp::Node {
public:
    GPIOSubscriberNode();
    ~GPIOSubscriberNode();

private:
    // Subscribers
    rclcpp::Subscription<motor_controller::msg::Dccommand>::SharedPtr dc_sub_;
    rclcpp::Subscription<motor_controller::msg::StepperCommand>::SharedPtr stepper_sub_;
    rclcpp::Subscription<motor_controller::msg::UnitreeCommand>::SharedPtr unitree_sub_;

#ifdef USE_PIGPIO
    // GPIO pin definitions (adjust as needed for your RPi setup)
    static constexpr int PIN_MOTORBL = 17;
    static constexpr int PIN_MOTORBR = 18;
    static constexpr int PIN_MOTORFL = 27;
    static constexpr int PIN_MOTORFR = 22;

    // GPIO ranges and constants
    static constexpr int PWM_RANGE = 255;       // For DC motors
    static constexpr int PWM_FREQUENCY = 1000;  // 1kHz PWM frequency

    // GPIO control methods
    void setup_gpio();
    void cleanup_gpio();
    void set_motor_pwm(int pin, int32_t pwm_value);
#endif

    // Callback methods
    void dc_callback(const motor_controller::msg::Dccommand::SharedPtr msg);
    void stepper_callback(const motor_controller::msg::StepperCommand::SharedPtr msg);
    void unitree_callback(const motor_controller::msg::UnitreeCommand::SharedPtr msg);
};

#endif
