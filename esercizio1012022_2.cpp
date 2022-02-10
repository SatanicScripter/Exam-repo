//Scrivere un numero; il programma lo scomporrà in cifre e le stamperà
#include <iostream>
using namespace std;
int main()
{
    int n,q,r;
    cout<<"Scrivi il numero"<<endl;
    cin>>n;
    cout<<"Ecco le cifre del numero:"<<endl;
    do{
        q=n/10;
        r=n-q*10;
        cout<<r<<endl;
        n=q;
    }while(q>0);
    return 0;
}
