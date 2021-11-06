
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main()

{
    int num1;
    int num2;
    int somma;
    int differenza;
    int prodotto;
    int divisione;
    // costanti
    // Start
    cout<< "Introduci il valore num1 "<<endl;
    cin>> num1;
    cout<< "introduci il valore num2 "<<endl;
    cin>> num2;
    somma= num1+num2;
    cout<< "La somma è: "<< somma<< endl;
    differenza= num1-num2;
    cout<< "La differenza è: "<< differenza<< endl;
    prodotto= num1*num2;
    cout<< "Il prodotto è: "<< prodotto<< endl;
    if (num2==0);
    divisione= num1/num2;
    cout<< "La divisione è: "<< divisione<< endl;
    return 0;
}

