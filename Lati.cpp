#include <iostream>
using namespace std;

int main() {
    //Identificatori
    int lati;
    //Costanti
    //START
    cin>>lati;
    cout<<"Inserisci lati: "<<lati<<endl;
    switch(lati){
        case 3:cout<<"Il poligono è un triangolo"<<endl;
        case 4:cout<<"Il poligono è un quadrilatero"<<endl;
        case 5:cout<<"Il poligono è un pentagono"<<endl;
        case 6:cout<<"Il poligono è un esagono"<<endl;
        case 7:cout<<"Il poligono è un ettagono"<<endl;
        case 8:cout<<"Il poligono è un'ottagono"<<endl;
        case 9:cout<<"Il poligono è un'ennagono"<<endl;
        case 10:cout<<"Il poligono è un decagono"<<endl;
        case 11:cout<<"Il poligono è un endecagono"<<endl;
        case 12:cout<<"Il poligono è un dodecagono"<<endl;
    }
	return 0;
}
