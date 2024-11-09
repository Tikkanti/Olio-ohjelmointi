#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota","Verso",2016));
    carList.push_back(Car("Honda","Accord",2012));
    carList.push_back(Car("Honda","Accord",2009));

    cout<<"Toisen auton tiedot: "<<endl;
    carList[1].printData();

    cout<<"****Tulostetaan kaikkien autojen tiedot****"<<endl;
    for(const auto &car :carList)
    {
        car.printData();
    }

    return 0;
}
