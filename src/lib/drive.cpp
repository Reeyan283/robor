#include "main.h"

Drive::Drive(int LAPort, int LBPort, int LCPort, int RAPort, int RBPort, int RCPort,
             bool LARev, bool LBRev, bool LCRev, bool RARev, bool RBRev, bool RCRev,
             pros::motor_gearset_e_t gearset,
             pros::motor_brake_mode_e_t brakeMode):
    
    LAMotor(LAPort, gearset, LARev),
    LBMotor(LBPort, gearset, LBRev),
    LCMotor(LCPort, gearset, LCRev),
    RAMotor(RAPort, gearset, RARev),
    RBMotor(RBPort, gearset, RBRev),
    RCMotor(RCPort, gearset, RCRev)

    {
        motor_setBrake(brakeMode);
    }

void Drive::motor_move(int LVoltage, int RVoltage) {
    LAMotor.move_voltage(LVoltage);
    LBMotor.move_voltage(LVoltage);
    LCMotor.move_voltage(LVoltage);
    RAMotor.move_voltage(RVoltage);
    RBMotor.move_voltage(RVoltage);
    RCMotor.move_voltage(RVoltage);
}

void Drive::motor_moveVoltage(int LVoltage, int RVoltage) {
    LAMotor.move_voltage(LVoltage);
    LBMotor.move_voltage(LVoltage);
    LCMotor.move_voltage(LVoltage);
    RAMotor.move_voltage(RVoltage);
    RBMotor.move_voltage(RVoltage);
    RCMotor.move_voltage(RVoltage);
}

void Drive::motor_moveVelocity(int LVelocity, int RVelocity) {
    LAMotor.move_velocity(LVelocity);
    LBMotor.move_velocity(LVelocity);
    LCMotor.move_velocity(LVelocity);
    RAMotor.move_velocity(RVelocity);
    RBMotor.move_velocity(RVelocity);
    RCMotor.move_velocity(RVelocity);
}

void Drive::motor_setBrake(pros::motor_brake_mode_e_t brakeMode) {
    LAMotor.set_brake_mode(brakeMode);
    LBMotor.set_brake_mode(brakeMode);
    LCMotor.set_brake_mode(brakeMode);
    RAMotor.set_brake_mode(brakeMode);
    RBMotor.set_brake_mode(brakeMode);
    RCMotor.set_brake_mode(brakeMode);
}