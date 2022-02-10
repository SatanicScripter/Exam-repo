//Scrivere 2 numeri, stamparli in ordine crescente
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Scrivi il primo numero"<<endl;
    cin>>a;
    cout<<"Scrivi il secondo numero"<<endl;
    cin>>b;
    cout<<"Ecco l'ordine corretto:"<<endl;
    if(a>b){
        cout<<b<<endl;
        cout<<a<<endl;
    }else
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}
