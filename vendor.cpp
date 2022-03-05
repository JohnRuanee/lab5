#include "vendor.h"

string Vendor::getName(){
  return name;
}
void Vendor::setName(string n){
  name = n;
}
string Vendor::getAddress(){
  return address;
}
void Vendor::setAddress(string a){
  address = a;
}
string Vendor::getEmail(){
  return email;
}
void Vendor::setEmail(string e){
  email = e;
}
int Vendor::getAttribute2(){
  return company;
}
void Vendor::setAttribute1(int c){
  company = c;
}
int Vendor::getAttribute1(){
  return hoursOfOp;
}
void Vendor::setAttribute2(int h){
  hoursOfOp = h;
}
int Vendor::getPermitType(){
  return permitType;
}
void Vendor::setPermitType(int p){
  permitType = p;
}
