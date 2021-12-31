#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3;
    cout<<"Inserire 3 numeri"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    if((n2-n1)==(n3-n2))
    {
        cout<<"I numeri sono in progressione aritmetica";
    }
    else{
        cout<<"I numero non sono in progressione aritmetica";
    }
    return 0;
}
