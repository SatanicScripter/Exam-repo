//Somma di due numeri interi (lo facciamo tramite funzione)

#include <iostream>
using namespace std;
//Dichiarazione delle funzioni
int somma(int , int );

int main()
{
    //Indetificatori
    int a, b, c;
    //Start
    cout<<"Introduci a: ";
    cin>>a;
    cout<<"Introduci b: ";
    cin>>b;
    c=a+b;
    cout<<"c="<<c;
    return 0;
}
int somma (int a, int b){
    int c;
    c=a+b;
    return c;
}
