#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Inserire un numero"<<endl;
    cin>>n;
    if((n%2)==0)
        cout<<"Il numero inserito e divisibile per 2"<<endl;
    else
        if((n%3)==0)
        cout<<"Il numero inserito e divisibile per 3"<<endl;
    else
        if((n%5)==0)
        cout<<"Il numero inserito e divisibile per 5"<<endl;
        else
            if((n%7)==0)
            cout<<"Il numero inserito e divisibile per 7"<<endl;
        else
            cout<<"Il numero inserito non e divisibile per 2,3,5,7"<<endl;
    return 0;
}
