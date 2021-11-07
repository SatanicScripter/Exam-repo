#include <iostream>
using namespace std;

int main() {
    //Identificatori
    int giorno;
    //Costanti
    //START
    cout<<"Inserisci giorno: "<<endl;
    cin>>giorno;
    switch(giorno)
    {
        case 1:cout<<"Lunedì"<<endl;
        case 2:cout<<"Martedì"<<endl;
        case 3:cout<<"Mercoledì"<<endl;
        case 4:cout<<"Giovedì"<<endl;
        case 5:cout<<"Venerdì"<<endl;
        case 6:cout<<"Sabato"<<endl;
        case 7:cout<<"Domenica"<<endl;
    }
    
	return 0;
}
