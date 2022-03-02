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
  Visitors(string n, string a, string e, int intent, int time, int p) : name{n}, address{a}, email{e}, intentOfVisit{intent}, timeOfVisit{time}, permit{p} {}

  int getTimeOfVisit();
  int getIntentOfVisit();
  string getName();
  string getAddress();
  int getPermitType();
  void setIntentOfVisit(int intentOfVisit);
  void setTimeOfVisit(int timeOfVisit);
  void setName(string name);
  void setAddress(string address);
  void setEmail(string email;);
  void setPermitType(int permit);

};