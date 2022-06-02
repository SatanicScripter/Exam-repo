#include <cstdlib>
#include <iostream>
using namespace std;

struct libro{
    int codice;
    int numero_pagine;
    float prezzo_unitario;
};

int main(int argc, char** argv) {
    //Costanti
    const int I_LIBRI=3;
    //Identificatori
    libro l1[I_LIBRI];
    float costo_medio;
    //Start
    for(int i=1;i<I_LIBRI;i++){
        cout<<"Libro n° "<<i;
        cout<<endl;
        cout<<"Inserire il codice: ";
        cin>>l1[i].codice;
        cout<<"Inserire il numero pagine: ";
        cin>>l1[i].numero_pagine;
        cout<<"Inserire il prezzo: ";
        cin>>l1[i].prezzo_unitario;
        costo_medio= l1[i].prezzo_unitario/l1[i].numero_pagine;
        cout<<"Il costo medio per il libro "<< i<<" e' "<<costo_medio<<endl;
        cout<<"___________"<<endl;
    }
    return 0;
}

