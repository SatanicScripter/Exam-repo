//Scrivere un programma che inserendo una temperatura la converta in Fahrenheit e in Kelvin
#include<iostream>
using namespace std;

int main()
{
float temp;
cout<<"inserisci la temperatura"<<endl;
cin>>temp;

if(temp<-273.15)
{
    cout<<"ERRORE, hai inserito una temperatura inferiore allo zero assoluto!";
}
else
{

    cout<<"temperatura in Fahrenheit "<<(9/5)*temp+32<<endl;
    cout<<"temperatura in Kelvin "<<temp+273.15<<endl;
}

}
