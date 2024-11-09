#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Verso");
    myCar.setYearModel(2016);
    myCar.printData();
    return 0;
}
