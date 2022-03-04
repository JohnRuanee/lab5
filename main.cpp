#include <string>
#include <iostream>
#include "Car.h"
#include "Lev.h"
#include "Invoice.h"
#include "Employees.h"
#include "Visitors.h"
#include "Trucks.h"
#include "Motorcycle.h"
#include "student.h"
#include "vendor.h"

using namespace std;

int main(){

  string input;
  int intInput;
  int discount = 0;
  int serviceCharge = 0;
  int index;

  string attributeCustomer1[] = {"department", "year", "intent of visit", "company number"};
  string attributeCustomer2[] = {"location", "location of ", "intent of visit", "company number"};

  string attributeVehicle[] = {"vehicle type", "weight", "fuel type", "length"};



  cout << "Customer type: ";
  cin >> input;
  if(input == "employee"){
    Employees customer = Employees();
    discount += 5;
  } else if(input == "student"){
    student customer = student();
  } else if(input == "visitor"){
    Visitors customer = Visitors();
    serviceCharge += 5;
  } else if(input == "vendor"){
    vendor customer = vendor();
    serviceCharge += 10;
  }

  cout << "Name: ";
  cin >> input;
  customer.setName(input);
  cout << "Address: ";
  cin >> input;
  customer.setAddress(input);
  cin >> intInput;
  cout << "Email: ";
  customer.setEmail(input);
  cin >> input;
  cout << "Permit type: ";
  customer.setPermitType(intInput);
  cout << "Name: ";
  cin >> intInput;
  vehicle.setAttribute1(intInput);
  cin >> intInput;
  vehicle.setAttribute2(intInput);



  cin >> input;
  if(input == "car"){
    Car vehicle = Car();
    index = 0;
  } else if(input == "lev"){
    Lev vehicle = Lev();
    index = 0;
    discount += 10;
  } else if(input == "truck"){
    Trucks vehicle = Trucks();
    index = 1;
  } else if(input == "motorcycle"){
    Motorcycle car = Motorcycle();
    index = 0;
  }

  cout << "Make: ";
  cin >> input;
  vehicle.setMake(input);
  cout << "Model: ";
  cin >> input;
  vehicle.setModel(input);
  cout << "Year: ";
  cin >> intInput;
  vehicle.setYear(intInput);
  cout << "Lisence plate: ";
  cin >> input;
  vehicle.setLisencePlate(input);
  cout << "Enter " << attributeVehicle[index] << ": ";
  cin >> intInput;
  vehicle.setAttribute1(intInput);
  cout << "Enter " << attributeVehicle[index + 2] << ": ";
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

  // Output
  cout << "Invoice " << endl;
  cout << "Name: " << customer.getName() << endl;
  cout << "Email: " << customer.getEmail(); << endl;
  cout << "Make: " << vehicle.getMake() << endl;
  cout << "Year: " << vehicle.getYear() << endl;
  cout << "Permit Type: " << customer.getPermitType() << endl;
  cout << "Permit Price: " << invoice.getPrice() << endl;
  cout << "Service Charge: " << invoice.getCharge() << endl;
  cout << "Discount: " << invoice.getDiscount() << endl;
  cout << "Total Price: " << invoice.calcTotalPrice() << endl;

}
