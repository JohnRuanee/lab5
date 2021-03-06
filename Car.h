#ifndef CAR_H_
#define CAR_H_

#include <string>

using namespace std;

class Car {
private:
  string make;
  string model;
  int year;
  string lisencePlate;
  string type;
  string fuel;

public:
  Car(): make("0"), model("0"), year(0), lisencePlate("0"), type("0"), fuel("0") {};
  Car(string mk, string md, int y, string l, string t, string f): make(mk), model(md), year(y), lisencePlate(l), type(t), fuel(f) {};

  string getMake();
  string getModel();
  int getYear();
  string getLisencePlate();
  string getAttribute1();
  string getAttribute2();

  void setMake(string);
  void setModel(string);
  void setYear(int);
  void setLisencePlate(string);
  void setAttribute1(string);
  void setAttribute2(string);


};
#endif
