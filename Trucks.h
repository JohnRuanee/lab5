#ifndef TRUCKS_H_
#define TRUCKS_H_

#include <iostream>
#include <string>

using namespace std;

class Trucks {

    private:

    string make = "Toyota";
    string model = "4 runner";
    int year = 2010;
    string lisencePlate = "abc-123";
    int weight = 3000;
    int length = 5;

    public:

    //constructors
    Trucks() = default;
    Trucks(string m1,string m2, int y,string lp, int w, int l) {
        if (w>0) {
            weight = w;
        }

        if (l>0) {
            length = l;
        }
    }

    string getMake();
    void setMake(string m1);
    string getModel();
    void setModel(string m2);
    int getYear();
    void setYear(int y);
    string getLisencePlate();
    void setLisencePlate(string lp);
    int getType();
    void setType(int w);
    int getFuel();
    void setFuel(int l);
};

#endif
