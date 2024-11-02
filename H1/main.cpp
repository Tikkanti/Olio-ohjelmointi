#include <iostream>
#include<iomanip>


using namespace std;
void calcSum(int luku1, int luku2);
void calcDiv(float luku1, float luku2);
int retSum(int luku1, int luku2);
float retDiv(float luku1, float luku2);

int main()
{
    int luku1;
    int luku2;
    cout << "Anna ensimmainen luku:" << endl;
    cin>>luku1;
    cout<< "Anna toinen luku:"<<endl;
    cin>>luku2;
    cout<< "Ensimmaisena kaytetaan void-funktioita"<<endl;
    calcSum(luku1, luku2);
    calcDiv(luku1, luku2);
    cout<< "Sitten kaytetaan palauttavia-funktioita"<<endl;
    int summa =retSum(luku1, luku2);
    cout<<luku1<< " + "<<luku2<< " = "<<summa<<endl;
    float osamaara=retDiv(luku1, luku2);
    cout<<luku1<< " / "<<luku2<< " = "<<osamaara<<endl;



    return 0;
}
void calcSum(int luku1, int luku2)
{
    int tulos;
    tulos = luku1+luku2;
    cout<<luku1<< " + "<<luku2<< " = "<<tulos<<endl;
}

void calcDiv(float luku1, float luku2)
{

    if (luku2 ==0)
    {
        cout<<"Nollalla ei voi jakaa"<<endl;
    }
    else
    {
        float tulos = luku1/luku2;
        cout<<fixed<<setprecision(2);
        cout<<luku1<< " / "<<luku2<< " = "<<tulos<<endl;
    }
}
int retSum(int luku1, int luku2)
{
    int summatulos = luku1+luku2;
    return summatulos;
}

float retDiv(float luku1, float luku2)
{
    if (luku2 ==0)
    {
        cout<<"Nollalla ei voi jakaa"<<endl;
    }
    else
    {
        float jakotulos = luku1/luku2;
        cout<<fixed<<setprecision(2);
        return jakotulos;
    }

}
