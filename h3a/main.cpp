#include "italianchef.h"

#include <chef.h>
#include <iostream>

using namespace std;

int main()
{
    Chef objectChef("Gordon Ramsay");
    objectChef.makeSalad();
    objectChef.makeSoup();
    cout<<"*****************"<<endl;
    ItalianChef objectChef2("Anthony Bourdain");
    objectChef2.makeSalad();
    objectChef2.makeSoup();
    objectChef2.makePasta();
    objectChef2.getName();
    return 0;
}
