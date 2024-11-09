#include "car.h"

Car::Car(const string &brand, const string &model, const int &yearModel)
    : brand(brand), model(model), yearModel(yearModel){}

void Car::printData() const
{
    cout<<"Merkki: "<<brand<<endl<<"Malli: "<<model<<endl<<"Vuosimalli: "<<yearModel<<endl;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}


