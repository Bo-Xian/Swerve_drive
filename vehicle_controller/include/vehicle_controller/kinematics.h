#pragma once
#include <vector>
#include "vehicle_controller/vehicle_controller_define.h"

namespace vehicle_controller
{
class VehicleKinematics
{
public:
    VehicleKinematics();
    ~VehicleKinematics();
    void forwardKinematics(KinematicsData &kinematics_data);
    void inverseKinematics(KinematicsData &kinematics_data);
private:
    void angularVelocityToDirection(const double &ang_vel, const Double2 &position, Double2 &direction);
    double metersToRads(const double &meters);
    double radsTometers(const double &rads);
};
} // namespace vehicle_controller
