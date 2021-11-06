#include <iostream>
using namespace std;

int main() {
    //Identificatori
    int base;
    int altezza;
    int perimetro;
    int area;
    //Costanti
    //START
    cout<< "Inserisci la misura della base"<< endl;
    cin >> base;
    cout << "Inserisci la misura dell'altezza"<< endl;
    cin >> altezza;
    perimetro=2*(base+altezza);
    area=base*altezza;
    cout << "Il perimetro del rettangolo è: "<<perimetro<<endl;
    cout<< "L'area del rettangolo è: " <<area<<endl;
	return 0;
}
