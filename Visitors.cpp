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

int Visitors::getIntentOfVisit()
{ return intentOfVisit;}

int Visitors::getTimeOfVisit()
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

void Visitors::setIntentOfVisit(int intent){

  intentOfVisit = intent;
}

void Visitors::setTimeOfVisit(int t) {

  timeOfVisit = time;
}

void Visitors::setPermitType(int permit) {

  permit = p;
}
