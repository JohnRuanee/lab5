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




  if (input == "Visitor"){

    cout << "Name: " << endl;
    cin >> userN;
    cout << "Address: " << endl;
    cin >> userA;
    cout << "Email: " << endl;
    cin >> userE;
    cout >> "Intent of Visit: "


  }



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
  vehicle.setAttribute1(intInput);
  cin >> intInput;
  vehicle.setFuel(intInput);

}
