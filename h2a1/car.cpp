#include "car.h"

string car::getBrand() const
{
    return brand;
}

void car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string car::getModel() const
{
    return model;
}

void car::setModel(const string &newModel)
{
    model = newModel;
}

int car::getYearModel() const
{
    return yearModel;
}

void car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

car::car() {}

void car::printData() const
{
    cout<<"Auton merkki: "<<getBrand()<<endl<<"Malli: "<<endl<<getModel()<<"Vuosimalli: "<<getYearModel()<<endl;
}
