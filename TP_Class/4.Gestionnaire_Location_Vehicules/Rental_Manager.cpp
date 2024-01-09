#include "rental_manager.h"
#include <iostream>

void RentalManager::addVehicle(const std::string& type, const std::string& model) {
    vehicles.emplace_back(type, model);
}

void RentalManager::rentVehicle(int vehicleIndex) {
    if (vehicleIndex >= 0 && vehicleIndex < vehicles.size()) {
        rentalRecords.emplace_back(&vehicles[vehicleIndex]);
        rentalRecords.back().vehicle->rent();
    } else {
        std::cout << "Invalid vehicle index." << std::endl;
    }
}

void RentalManager::returnVehicle(int recordIndex) {
    if (recordIndex >= 0 && recordIndex < rentalRecords.size()) {
        rentalRecords[recordIndex].endRental();
        rentalRecords[recordIndex].vehicle->returnVehicle();
    } else {
        std::cout << "Invalid rental record index." << std::endl;
    }
}
