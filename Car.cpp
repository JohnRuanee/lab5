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
string Car::getAttribute1(){
  return type;
}
string Car::getAttribute1(){
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
void Car::setAttribute1(string t){
  type = t;
}
void Car::setAttribute1(string f){
  fuel = f;
}
