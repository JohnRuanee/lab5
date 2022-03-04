#include <string>
#ifndef EMPLOYEES_H_
#define EMPLOYEES_H_

class Employees {

private:

  string name;
  string address;
  string email;
  string department;
  string location;
  int permit;

public:


  Employees();
  Employees(string n, string a, string e, int d, int l, int p) : name(n), address(a), email(e), department(d), location(l), permit(p) {}

  int getAttribute1();
  int getAttribute2();
  string getName();
  string getAddress();
  int getPermitType();
  void setAttribute1(string d);
  void setAttribute2(string l);
  void setName(string n);
  void setAddress(string a);
  void setEmail(string e);
  void setPermitType(int permit);

};
#endif
