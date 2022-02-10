#include <cstdlib>
#include <iostream>

using namespace std;

//Dichiarazione funzioni
void perimetro_area(float, float, float&, float&);
int main(int argc, char** argv) {
    //Identificatori
    float base;
    float altezza;
    float perimetro;
    float area;
    //Costanti
    //Start
    cout<<"Introdurre la base"<<endl;
    cin>>base;
    cout<<"Introduci l'altezza"<<endl;
    cin>>altezza;
    //Cout per area e perimetro
    perimetro_area(base, altezza, perimetro, area);
    cout<<"Il perimetro e' "<<endl;
    cout<<perimetro<<endl;
    cout<<"L'area e' "<<endl;
    cout<<area<<endl;
    //Cout per la locazione di memoria
    cout<<"L'indirizzo di memoria della base e' "<<&base<<endl;
    cout<<"L'indirizzo di memoria dell'altezza e' "<<&altezza<<endl;
    cout<<"L'indirizzo di memoria dell'area e' "<<&area<<endl;
    cout<<"L'indirizzo di memoria del perimetro e' "<<&perimetro<<endl;
    return 0;
}
//Operazioni per il calcolo dell'area e del perimetro
void perimetro_area(float b,float h,float& perimetro,float& area)
{
    //Nessun Return con il void
    perimetro=b*2+h*2;
    area=b*h;
}

