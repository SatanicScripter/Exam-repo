#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

struct informazioni{
    string capoluogo;
    float temp_max;
    float temp_min;
    string giorni;
};

int main(int argc, char** argv) {
    //Costanti
    const int N_GIORNI=7;
    //Identificatori
    //Start
    informazioni meteo;
    cout<<"Inserire il nome della citta': ";
    cin>>meteo.capoluogo;
    cout<<endl;
    for(int i=1;i<=N_GIORNI;i++){
        cout<<"Inserire il giorno: ";
        cin>>meteo.giorni;
        cout<<"_____________"<<endl;
        cout<<"Inserire la temperatura massima: ";
        cin>>meteo.temp_max;
        cout<<"_____________"<<endl;
        cout<<"Inserire la temperatura minima: ";
        cin>>meteo.temp_min;
        cout<<"_____________"<<endl;
    }
    return 0;
}

