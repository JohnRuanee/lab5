#include <string>
#ifndef VISITORS_H_
#define VISITORS_H_

class Visitors {

private:

  string name;
  string address;
  string email;
  int intentOfVisit;
  int timeOfVisit;
  int permit;

public:


  Visitors();
  Visitors(string n, string a, string e, int intent, int time, int p) : name{n}, address{a}, email{e}, intentOfVisit{intent}, timeOfVisit{time}, permit{p} {};

  int getAttribute2();
  int getAttribute1();
  string getName();
  string getAddress();
  string getEmail();
  int getPermitType();
  void setAttribute1(int intent);
  void setAttribute2(int t);
  void setName(string n);
  void setAddress(string a);
  void setEmail(string e);
  void setPermitType(int p);

};

#endif
