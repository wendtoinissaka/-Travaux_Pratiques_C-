#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED


#include <string>

class Vehicle {
public:
    std::string type;
    std::string model;
    bool available;

    Vehicle(const std::string& type, const std::string& model);
    void rent();
    void returnVehicle();
};


#endif // VEHICLE_H_INCLUDED
