#ifndef CAR_H
#define CAR_H

#include "engine.h"

#include "wheel.h"
class Car
{
public:
    Car();
    Car(string, string);
    void setObjEngine();

    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void printDetails();

    void setObjWheel1(const Wheel &newObjWheel1);

    void setObjWheel2(const Wheel &newObjWheel2);

    void setObjWheel3(const Wheel &newObjWheel3);

    void setObjWheel4(const Wheel &newObjWheel4);

    Wheel getObjWheel1() const;

    Wheel getObjWheel2() const;

    Wheel getObjWheel3() const;

    Wheel getObjWheel4() const;

    void setWheels();

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

};

#endif // CAR_H
