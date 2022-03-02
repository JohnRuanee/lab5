#ifndef MOTORCYCLES_H_
#define MOTORCYCLES_H_

#include <iostream>
#include <string>

using namespace std;

class Motorcycle {

    private:

    string make = "bmw";
    string model = "x5";
    int year = 2020;
    string lisencePlate = "abc-123";
    string type = "motorcycle";
    string fuelType = "87 unleaded";

    public:

    //constructors
    Motorcycle() = default;
    Motorcycle(string m1,string m2,int y,string lp,string t,string ft) {
        if (y>1900) {
            year = y;
        }

        if (t=="motorcycle"||t=="scooter") {
            type = t;
        }

        if (ft == "87 unleaded"||ft=="91 unleaded"||ft == "93 unleaded"||ft == "diesel") {
            fuelType = ft;
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
    string getType();
    void setType(string t);
    string getFuel();
    void setFuel(string ft);


};

#endif
