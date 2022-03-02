#include <iostream>
#include "Trucks.h"
#include <string>

using namespace std;

string Trucks::getMake() {
    return make;
}

void Trucks::setMake(string m1) {
    make = m1;
}


string Trucks::getModel() {
    return model;
}

void Trucks::setModel(string m2) {
    model = m2;
}

int Trucks::getYear() {
    return year;
}
void Trucks::setYear(int y) {

    if (y>=1900) {
        year = y;
    }
}

string Trucks::getLisencePlate() {
    return lisencePlate;
}

void Trucks::setLisencePlate(string lp) {

    lisencePlate = lp;
}

int Trucks::getWeight() {
    return weight;
}

void Trucks::setWeight(int w) {

    if (w>0) {
        weight = w;
    }
}

int Trucks::getLength() {
    return length;
}

void Trucks::setLength(int l) {
    if (l>0) {
        length = l;
    }
}

