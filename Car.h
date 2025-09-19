#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    double speed;
    double fuel;
    double latitude;
    double longitude;

public:
    Car();
    void accelerate(double amount);
    void brake(double amount);
    void refuel(double liters);
    void updateGPS(double lat, double lon);
    void printStatus() const;

    // validation hook
    bool isValid() const;
};

#endif
