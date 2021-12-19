#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //Identificatori
    int magico, x;
    //Costanti
    //START
    magico=rand()%10;
    cout<<"Indovina il numero"<<endl;
    cin>>x;
    if(x=magico)
        cout<<"Esatto!";
    else
        cout<<"Errato!";
    cout<<"Numero generato= "<< magico<<endl;
    return 0;
}
