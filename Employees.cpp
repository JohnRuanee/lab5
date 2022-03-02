#include <iostream>
#include <string>
#include "Employees.h"
using namespace std;


string Employees::getName()
{ return name;}

string Employees::getaddress()
{ return address;}

string Employees::getEmail()
{ return email;}

string Employees::getDepartment()
{ return department;}

string Employees::getClassLocation()
{ return location;}

int Employees::getPermitType()
{ return permit;}

void Employees::setName(string n) {

  name = n;
}

void Employees::setAddress(string a){

  address = a;
}


void Employees::setEmail(string e){

  email = e;
}

void Employees::setDepartment(string d){

  department = d;
}

void Employees::setClassLocation(string l) {

  location = l;
}

void Employees::setPermitType(int p) {

  permit = p;
}
