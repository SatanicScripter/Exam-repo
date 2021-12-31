#include<iostream>
using namespace std;

int main()
{
int etapatente;
int eta;
cout<<"inserisci la tua eta'"<<endl;
cin>>eta;
cout<<"inserisci l'eta' a cui si puo' prendere la patente dove vivi"<<endl;
cin>>etapatente;

if(eta>=etapatente)
{
    cout<<"puoi prendere la patente";
}
else
{
    cout<<"non puoi prendere la patente";
}
return 0;
}
