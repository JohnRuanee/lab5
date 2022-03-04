#include <iostream>
#include <string>
#include "Visitors.h"
using namespace std;


string Visitors::getName()
{ return name;}

string Visitors::getaddress()
{ return address;}

string Visitors::getEmail()
{ return email;}

int Visitors::getAttribute1()
{ return intentOfVisit;}

int Visitors::getAttribute2()
{ return timeOfVisit;}

int Visitors::getPermitType()
{ return permit;}

void Visitors::setName(string n) {

  name = n;
}

void Visitors::setAddress(string a){

  address = a;
}

void Visitors::setEmail(string e){

  email = e;
}

void Visitors::setAttribute1(int intent){

  intentOfVisit = intent;
}

void Visitors::setAttribute2(int t) {

  timeOfVisit = t;
}

void Visitors::setPermitType(int p) {

  permit = p;
}
