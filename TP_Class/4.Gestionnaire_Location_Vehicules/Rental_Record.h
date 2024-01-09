#ifndef RENTAL_RECORD_H_INCLUDED
#define RENTAL_RECORD_H_INCLUDED


#include "vehicle.h"
#include <ctime>

class RentalRecord {
public:
    Vehicle* vehicle;
    time_t startTime;
    time_t endTime;
    double cost;

    RentalRecord(Vehicle* vehicle);
    void endRental();
};


#endif // RENTAL_RECORD_H_INCLUDED
