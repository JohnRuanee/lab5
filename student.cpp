#include "student.h"

string Student::getName(){
  return name;
}
void Student::setName(string n){
  name = n;
}
string Student::getAddress(){
  return address;
}
void Student::setAddress(string a){
  address = a;
}
string Student::getEmail(){
  return email;
}
void Student::setEmail(string e){
  email = e;
}
int Student::getAttribute2(){
  return year;
}
void Student::setAttribute2(int y){
  year = y;
}
int Student::getAttribute1(){
  return onCampus;
}
int Student::setAttribute1(int oC){
  onCampus = oC;
}
int Student::getPermitType(){
  return permitType;
}
void Student::setPermitType(int p){
  permitType = p;
}
