//Programma che calcola la somma delle cifre di un numero

#include <iostream>
using namespace std;
int main()
{
    int x,q,r,s=0;
    cout<<"Scrivi un numero"<<endl;
    cin>>x;
    do{
        q=x/10;
        r=x-(q*10);
        s=s+r;
        x=q;
    }
    while(q!=0);
    cout<<"La somma delle cifre e' "<<s<<endl;
    return 0;
}
