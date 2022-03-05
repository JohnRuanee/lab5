#include <string>
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student{
  private:
    string name;
    string address;
    string email;
    int year;
    int onCampus;
    int permitType;
  public:
    Student();
    Student(string n, string a, string e, int y, bool oC, int p);
    string getName();
    void setName(string n);
    string getAddress();
    void setAddress(string a);
    string getEmail();
    void setEmail(string e);
    int getAttribute2();
    void setAttribute2(int y);
    int getAttribute1();
    void setAttribute1(int oC);
    int getPermitType();
    void setPermitType(int p);
};

#endif
