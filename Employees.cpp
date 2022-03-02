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

string Employees::getAttribute1()
{ return department;}

string Employees::getAttribute2()
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

void Employees::setAttribute1(string d){

  department = d;
}

void Employees::setAttribute2(string l) {

  location = l;
}

void Employees::setPermitType(int p) {

  permit = p;
}
