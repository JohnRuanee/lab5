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
string Lev::getAttribute1(){
  return type;
}
string Lev::getAttribute1(){
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
void Lev::setAttribute1(string t){
  type = t;
}
void Lev::setAttribute1(string f){
  fuel = f;
}
