#ifndef LEV_H_
#define LEV_H_

#include <string>

using namespace std;

class Lev {
private:
  string make;
  string model;
  int year;
  string lisencePlate;
  string type;
  string fuel;

public:
  Lev(): make("0"), model("0"), year(0), lisencePlate("0"), type("0"), fuel("0") {};
  Lev(string mk, string md, int y, string l, string t, string f): make(mk), model(md), year(y), lisencePlate(l), type(t), fuel(f) {};

  string getMake();
  string getModel();
  int getYear();
  string getLisencePlate();
  string getType();
  string getFuel();

  void setMake(string);
  void setModel(string);
  void setYear(int);
  void setLisencePlate(string);
  void setType(string);
  void setFuel(string);


};
#endif
