#include <iostream>
#include "Motorcycle.h"
#include <string>

using namespace std;

string Motorcycle::getMake() {
    return make;
}

void Motorcycle::setMake(string m1) {
    make = m1;
}

string Motorcycle::getModel() {
    return model;
}
void Motorcycle::setModel(string m2) {
        model = m2;
    }
int Motorcycle::getYear() {
        return year;
    }
void Motorcycle::setYear(int y) {
    if (y>1900) {
        year = y;
    }
}
string Motorcycle::getLisencePlate() {
    return lisencePlate;
}
void Motorcycle::setLisencePlate(string lp) {
    lisencePlate = lp;
}
string Motorcycle::getType() {
    return type;
}
void Motorcycle::setType(string t) {
    if (t=="motorcycle"||t=="scooter") {
            type = t;
        }
}
string Motorcycle::getFuelType() {
    return fuelType;
}
void Motorcycle::setFuelType(string ft) {
    if (ft == "87 unleaded"||ft=="91 unleaded"||ft == "93 unleaded"||ft == "diesel") {
            fuelType = ft;
    }
}
