//Scrivere un programma che calcoli le soluzioni di una equazione di secondo grado
#include <iostream>
#include <math.h>
using namespace std;

int a, b, c;
float x1, x2, d;
void acquisisci_Coefficienti()
{
    cout<<"Inserisci il valore a ";
    cin>>a;
    cout<<"Inserisci il valore b ";
    cin>>b;
    cout<<"Inserisci il valore c ";
    cin>> c;
}
void calcola_Delta()
{
    d=(b*b)-(4*a*c);
}
void visualizza_Soluzioni()
{
    if(d<0)
        cout<<"Nessuna soluzione reale";
    else{
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        cout<<"x1= "<<x1<<"x2= "<<x2;
    }
}
void risolvi_Equazione()
{
    if((b==0)&&(c==0))
        cout<<"Equazione indeterminata";
    else
    if(b==0)
    cout<<"Equazione impossibile";
    else{
        x1=-(1.0*c)/b;
        cout<<"x="<<x1<<endl;
    }
}
int main()
{
    acquisisci_Coefficienti();
    if(a!=0)
    {
        calcola_Delta();
        visualizza_Soluzioni();
    }
    else
        risolvi_Equazione();
    return 0;
}
