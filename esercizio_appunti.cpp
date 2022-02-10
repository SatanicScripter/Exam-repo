#include <iostream>

using namespace std;

//dichiarazione delle funzioni
//tipo di dato output nome e parametri con tipo: SOLO TIPO E NUMERO
//funzione prende input e restituisce dato: una funzione restituisce un solo
//risultato
// \n è un modo abbreviato per scrivere endl tra doppi apici, sequenza di
//escape, new line
int somma(int, int);//scritto prototipo, definiti tipi identificatori

int main()
{
    //COSTANTI
    //identificatori
    int a,b,c;
    //start
    cout<<"\n Introduci a: ";
    cin>>a;
    cout<<"\n Introduci b: ";
    cin>>b;
    c=a+b;
    cout<<"\n c-"<<c;
    c=somma(a, b);//a e b sono dati che servono, sospeso momentaneamente il main
    //viene richiamata la funzione e gli passa i valori di a e b in ordine
    //( a mandato ad a1, b a b1)e poi
    //assegnamento  di c in main (risultato)
    //CHIAMATA DELLA FUNZIONE, INVOCATA
    //CONTANO ORDINE E NUMERO DI VARIABILI
    cout<<"\n c-"<<c;

    return 0;
}
//si scrive codice sotto main
//si ricopia valore restituito e nome, poi si dichiarano parametri dando nome
//variabile
//si scrive codice funzione (cosa deve fare)
//gli identificatori del main non vengono visti, non comunicano
int somma(int a1, int b1){
    int c1;
    a1=7;
    c1=a1+b1;
    //restituzione valore calcolato
    return c1;
}//si dimentica di a1 e b1 e torna a c=somma
