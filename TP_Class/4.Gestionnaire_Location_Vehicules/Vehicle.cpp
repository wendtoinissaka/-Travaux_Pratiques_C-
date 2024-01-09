#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string& type, const std::string& model) : type(type), model(model), available(true) {}

void Vehicle::rent() {
    if (available) {
        available = false;
        std::cout << "Vehicle rented: " << type << " - " << model << std::endl;
    } else {
        std::cout << "Sorry, the vehicle is not available for rent." << std::endl;
    }
}

void Vehicle::returnVehicle() {
    available = true;
    std::cout << "Vehicle returned: " << type << " - " << model << std::endl;
}
