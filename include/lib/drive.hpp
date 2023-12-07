#pragma once

class Drive {
    private:
        pros::Motor LAMotor, LBMotor, LCMotor, RAMotor, RBMotor, RCMotor;
    
    public:
        Drive(int LAPort, int LBPort, int LCPort, int RAPort, int RBPort, int RCPort,
              bool LARev, bool LBRev, bool LCRev, bool RARev, bool RBRev, bool RCRev,
              pros::motor_gearset_e_t gearset,
              pros::motor_brake_mode_e_t brakeMode);
        
        void motor_move(int LVoltage, int RVoltage);
        void motor_moveVoltage(int LVoltage, int RVoltage);
        void motor_moveVelocity(int LVelocity, int RVelocity);
        void motor_setBrake(pros::motor_brake_mode_e_t brakeMode);
};