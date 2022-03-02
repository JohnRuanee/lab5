#include <string>
#include <iostream>
#include "Car.h"
#include "Lev.h"
#include "Invoice.h"
#include "Employees.h"
#include "Visitors.h"
#include "Trucks.h"
#include "Motorcycle.h"

using namespace std;

int main(){

  string input;
  int intInput;




  cin >> input;
  if(input == "employee"){
    Employees customer = Employees();
  } else if(input == "student"){
    Visitors customer = Visitors();
  } /*else if(input == "visitor"){
    Truck vehicle = Truck();
  } else if(input == "vendor"){
    Motercycle car = Motorcycle();
  }*/

  cin >> input;
  customer.setName(input);
  cin >> input;
  customer.setAddress(input);
  cin >> intInput;
  customer.setEmail(input);
  cin >> input;
  customer.setPermitType(intInput);
  cin >> intInput;
  vehicle.setAttribute1(intInput);
  cin >> intInput;
  vehicle.setAttribute2(intInput);



  cin >> input;
  if(input == "car"){
    Car vehicle = Car();
  } else if(input == "lev"){
    Lev vehicle = Lev();
  } else if(input == "truck"){
    Truck vehicle = Truck();
  } else if(input == "motorcycle"){
    Motercycle car = Motorcycle();
  }

  cin >> input;
  vehicle.setMake(input);
  cin >> input;
  vehicle.setModel(input);
  cin >> intInput;
  vehicle.setYear(intInput);
  cin >> input;
  vehicle.setLisencePlate(input);
  cin >> intInput;
  vehicle.setAttribute1(intInput);
  cin >> intInput;
  vehicle.setAttribute2(intInput);

}
