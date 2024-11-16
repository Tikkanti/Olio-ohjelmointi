#include "italianchef.h"


ItalianChef::ItalianChef(string name) :Chef(name)
{
    cout<<"Italian Chef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    cout<<"Name of the Italian Chef is "<<name<<endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}
