#ifndef RENTAL_MANAGER_H_INCLUDED
#define RENTAL_MANAGER_H_INCLUDED


#include "vehicle.h"
#include "rental_record.h"
#include <vector>

class RentalManager {
public:
    std::vector<Vehicle> vehicles;
    std::vector<RentalRecord> rentalRecords;

    void addVehicle(const std::string& type, const std::string& model);
    void rentVehicle(int vehicleIndex);
    void returnVehicle(int recordIndex);
};


#endif // RENTAL_MANAGER_H_INCLUDED
