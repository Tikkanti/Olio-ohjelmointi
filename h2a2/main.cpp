#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    Rectangle* rect = new Rectangle;
    rect -> setWidth(5.0);
    rect -> setHeight(3.0);

    cout<<"Suorakulmion pinta-ala: "<<rect->getArea()<<endl<<"Suorakulmion ymparysmitta: "<<rect->getCircum()<<endl;
    delete rect;
    return 0;
}
