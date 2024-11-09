#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;

class car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    car();
    void printData()const;

    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
};

#endif // CAR_H
