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
  int discount = 0;
  int serviceCharge = 0;




  cin >> input;
  if(input == "employee"){
    Employees customer = Employees();
    discount += 5;
  } else if(input == "student"){
    Visitors customer = Visitors();
  } /*else if(input == "visitor"){
    Employees customer = Employees();
    serviceCharge += 5;
  } else if(input == "vendor"){
    Employees customer = Employees();
    serviceCharge += 10;
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
    discount += 10;
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

  int p;
  if(customer.getPermitType() == 0){
    p = 200;
  } else if(customer.getPermitType() == 1){
    p = 100;
  } else if(customer.getPermitType() == 2){
    p = 50;
  }

  Invoice invoice(p, discount, serviceCharge);

  invoice.calcTotalPrice();

}
