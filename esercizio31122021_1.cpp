//Leggere una sequenza di numeri reali, determinare quanti valori sono interi( senza la parte decimale) ed effettuarne il conteggio di entrambi.
//Terminare la lettura quando si incontra un valore uguale a 9999.
#include <iostream>
using namespace std;

int main()
{
    //Identificatori
    float n;
    int i=0, d=0;
    //START
    cout<<"Inserisci dei numeri. Digita 9999 per terminare il programma"<<endl;
    do{
        cout<<"Inserisci un numero: "<<endl;
        cin>>n;
        if(n==int(n)){
            i++;
        }
        else{
            d++;
        }
    }while(n!=9999);
    cout<<"I numeri interi sono:"<<i-1<<endl;
    cout<<"I numeri decimali sono: "<<d<<endl;
    return 0;
}
