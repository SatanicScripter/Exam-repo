#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    //Identificatori
    int x;
    int y;
    int z;
    int somma;
    //Costanti
    //START
    cin>> x;
    cout << "Inserisci il valore di x: "<<x<<endl;
    cin>> y;
    cout << "Inserisci il valore di y: "<<y<<endl;
    z=x+y;
    cout<<"z, nell'addizione, è uguale a: "<<z<<endl;
    z=x-y;
    cout<<"z, nella sottrazione, è uguale a: "<<z<<endl;
    z=x/y;
    cout <<"z, nella divisione, è uguale a: " <<z<<endl;
    z=x*y;
    cout<<"z, nella moltiplicazione, è uguale a: "<<z<<endl;
    return 0;
}

