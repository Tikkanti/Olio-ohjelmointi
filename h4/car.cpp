#include "car.h"

Car::Car() {}

Car::Car(string newModel, string newBrand)
{
    model=newModel;
    brand=newBrand;
}


void Car::setObjEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}



void Car::printDetails()
{
    cout<<"Auto: "<<getBrand()<<" "<<getModel()<<endl;
    cout<<"Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" l"<<endl;
    cout<<"Rengas 1 koko: "<<objWheel1.getSize()<<", Tyyppi: "<<objWheel1.getType()<<endl;
    cout<<"Rengas 2 koko: "<<objWheel2.getSize()<<", Tyyppi: "<<objWheel2.getType()<<endl;
    cout<<"Rengas 3 koko: "<<objWheel3.getSize()<<", Tyyppi: "<<objWheel3.getType()<<endl;
    cout<<"Rengas 4 koko: "<<objWheel4.getSize()<<", Tyyppi: "<<objWheel4.getType()<<endl;
}

void Car::setObjWheel1(const Wheel &newObjWheel1)
{
    objWheel1 = newObjWheel1;
}

void Car::setObjWheel2(const Wheel &newObjWheel2)
{
    objWheel2 = newObjWheel2;
}

void Car::setObjWheel3(const Wheel &newObjWheel3)
{
    objWheel3 = newObjWheel3;
}

void Car::setObjWheel4(const Wheel &newObjWheel4)
{
    objWheel4 = newObjWheel4;
}

Wheel Car::getObjWheel1() const
{
    return objWheel1;
}

Wheel Car::getObjWheel2() const
{
    return objWheel2;
}

Wheel Car::getObjWheel3() const
{
    return objWheel3;
}

Wheel Car::getObjWheel4() const
{
    return objWheel4;
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}
