#include <string>
#include "Lev.h"

using namespace std;

string Lev::getMake(){
  return make;
}
string Lev::getModel(){
  return model;
}
int Lev::getYear(){
  return year;
}
string Lev::getLisencePlate(){
  return lisencePlate;
}
string Lev::getType(){
  return type;
}
string Lev::getFuel(){
  return fuel;
}

void Lev::setMake(string m){
  make = m;
}
void Lev::setModel(string m){
  model = m;
}
void Lev::setYear(int y){
  year = y;
}
void Lev::setLisencePlate(string l){
  lisencePlate = l;
}
void Lev::setType(string t){
  type = t;
}
void Lev::setFuel(string f){
  fuel = f;
}
