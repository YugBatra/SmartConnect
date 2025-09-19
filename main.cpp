#include "Car.h"
#include <iostream>
#include <cassert>

int main() {
    Car car;

    // accelerate and update GPS
    car.accelerate(50);
    car.updateGPS(45.4215, -75.6972);  // Ottawa coords
    car.printStatus();
    assert(car.isValid());

    // brake
    car.brake(20);
    car.printStatus();
    assert(car.isValid());

    // refuel
    car.refuel(30);
    car.printStatus();
    assert(car.isValid());

    std::cout << "All validations passed!\n";
    return 0;
}
