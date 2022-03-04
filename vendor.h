#include <string>
#ifndef VENDOR_H
#define VENDOR_H

using namespace std;

class Vendor{
  private:
    string name;
    string address;
    string email;
    int company;
    int hoursOfOp;
    int permitType;
  public:
    string getName();
    void setName(string n);
    string getAddress();
    void setAddress(string a);
    string getEmail();
    void setEmail(string e);
    int getAttribute2();
    void setAttribute2(int c);
    int getAttribute2();
    void setAttribute2(int h);
    int getPermitType();
    void setPermitType(int p);
};

#endif
