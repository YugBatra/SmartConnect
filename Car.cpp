#include "Car.h"
#include <iostream>

Car::Car() : speed(0), fuel(100), latitude(0), longitude(0) {}

void Car::accelerate(double amount) {
    speed += amount;
    if (speed > 200) speed = 200;  // Max speed cap
    fuel -= amount * 0.1;
    if (fuel < 0) fuel = 0;
}

void Car::brake(double amount) {
    speed -= amount;
    if (speed < 0) speed = 0;
}

void Car::refuel(double liters) {
    fuel += liters;
    if (fuel > 100) fuel = 100;  // Tank capacity
}

void Car::updateGPS(double lat, double lon) {
    latitude = lat;
    longitude = lon;
}

void Car::printStatus() const {
    std::cout << "Speed: " << speed
              << " | Fuel: " << fuel
              << " | GPS: (" << latitude << ", " << longitude << ")\n";
}

bool Car::isValid() const {
    return (speed >= 0 && speed <= 200 && fuel >= 0);
}
