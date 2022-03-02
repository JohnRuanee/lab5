#include <string>
#include <iostream>
#include "Car.h"
#include "Lev.h"
#include "Invoice.h"

using namespace std;

int main(){
  string customer;

  string input;
  int intInput;


  cin >> input;
  if(input == car){
    Car vehicle = Car();
  } else if(input == lev){
    Lev vehicle = Lev();
  } else if(input == truck){
    Truck vehicle = Truck();
  } else if(input == motorcycle){
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
  vehicle.setType(intInput);
  cin >> intInput;
  vehicle.setFuel(intInput);
  

}
