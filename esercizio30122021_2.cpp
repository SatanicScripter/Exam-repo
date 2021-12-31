#include<iostream>
using namespace std;

int main()
{
float n1,n2,n3;
cout<<"inserisci tre numeri"<<endl;
cin>>n1;
cin>>n2;
cin>>n3;

if((n2-n1)==(n3-n2))
{
    cout<<"i numeri sono in progressione aritmetica";
}
else
{
    cout<<"i numeri NON sono in progressione aritmetica";
}
return 0;
}
