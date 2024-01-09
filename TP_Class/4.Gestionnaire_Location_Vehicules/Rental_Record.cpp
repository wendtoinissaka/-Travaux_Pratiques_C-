#include "rental_record.h"
#include <iostream>

RentalRecord::RentalRecord(Vehicle* vehicle) : vehicle(vehicle) {
    startTime = std::time(0);
}

void RentalRecord::endRental() {
    endTime = std::time(0);
    // Calculate the cost based on rental duration, type of vehicle, etc.
    // This is a simple example; you might want to implement a more sophisticated cost calculation.
    cost = difftime(endTime, startTime) * 0.01; // Assuming a cost of 0.01 per second
    std::cout << "Rental ended. Cost: " << cost << std::endl;
}
