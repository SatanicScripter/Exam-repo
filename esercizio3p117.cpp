#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, a, max=0, somma=0;
    float r;
    for (i=0;i<5;i++)
    {
        cout<<"Inserisci un numero"<<i+1<<": ";
        cin>>a;
        if(max<a)
            max=a;
        somma+=a;
    }
    r=somma/5.0;
    cout<<"Il valore inserito e': "<<max<<endl;
    cout<<"La radice quadrata della somma e': "<<sqrt(somma)<<endl;
    cout<<"La media è: "<<r<<endl;
    return 0;
}
