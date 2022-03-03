#include "Invoice.h"

void Invoice::setDiscount(double d){
  discount = d;
}
void Invoice::setCharge(double c){
  charge = c;
}
void Invoice::setPrice(double p){
  price = p;
}

double Invoice::getDiscount(){
  return discount;
}
double Invoice::getCharge(){
  return charge;
}
double Invoice::getPrice(){
  return price;
}

double Invoice::calcTotalPrice(){

  return price *((100 - discount)/10) + charge;
}
