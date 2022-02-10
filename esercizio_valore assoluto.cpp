#include <stdio.h>
#include <iostream>
using namespace std;
int tempo1(int, int, int); //prototipo
int tempo2(int, int, int); //prototipo
int main()
{
//identificatori
//1° quantità di tempo
int ore;
int minuti;
int secondi;
int seconditot;
//2° quantità di tempo
int ore;
int minuti;
int secondi_;
int seconditot;
//start
cout<<"1° quantità di tempo"<<endl;
cout<<"inserire valore ore ";
cin>>ore;
cout<<"inserire valore minuti ";
cin>>minuti;
cout<<"inserire valore secondi ";
cin>>secondi;
seconditot=tempo1(ore, minuti, secondi);
cout<<seconditot<<endl;
cout<<"2° quantità di tempo"<<endl;
cout<<"inserire valore ore ";
cin>>ore;
cout<<"inserire valore minuti ";
cin>>minuti;
cout<<"inserire valore secondi ";
cin>>secondi;
seconditot=tempo2(ore, minuti, secondi);
cout<<secondi_tot<<endl;
if(secondi_tot>seconditot){
    cout<<"il tempo maggiore è secondi_tot "<<secondi_tot;
}else
{
    cout<<"il tempo maggiore è seconditot "<<seconditot;
}
    return 0;
}
int seconditot;
int tempo1(int ore, int minuti, int secondi)//definizione
{
    ore=ore3600;
    minuti=minuti60;
    seconditot=ore+minuti+secondi;
    return seconditot;
}
int seconditot;
int tempo2(int ore, int minuti, int secondi)//definizione
{
    ore=ore3600;
    minuti=minuti60;
    seconditot=ore+minuti+secondi;
    return secondi_tot;
}
