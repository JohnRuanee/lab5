#include <string>
#include "Car.h"

using namespace std;

string Car::getMake(){
  return make;
}
string Car::getModel(){
  return model;
}
int Car::getYear(){
  return year;
}
string Car::getLisencePlate(){
  return lisencePlate;
}
string Car::getType(){
  return type;
}
string Car::getFuel(){
  return fuel;
}

void Car::setMake(string m){
  make = m;
}
void Car::setModel(string m){
  model = m;
}
void Car::setYear(int y){
  year = y;
}
void Car::setLisencePlate(string l){
  lisencePlate = l;
}
void Car::setType(string t){
  type = t;
}
void Car::setFuel(string f){
  fuel = f;
}
