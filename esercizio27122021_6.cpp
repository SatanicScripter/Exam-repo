//Dati due numeri stamparne il massimo comune divisore
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,mcd;
    cout<<"inserisci un primo numero ";
    cin>>n1;
    cout<<"inserisci un secondo numero ";
    cin>>n2;
    mcd=n1;
    while((mcd%n1!=0)&&(mcd%n1!=0))
    {
        mcd=mcd-1;
    }
    cout<<"il massimo comun divisore e' "<<mcd;
}

