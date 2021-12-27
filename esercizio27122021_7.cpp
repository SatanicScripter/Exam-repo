//Fare un programma che legge 10 numeri e dice quanti sono positivi, quanti negativi e quanti nulli.
#include <iostream>

using namespace std;

int main()
{
    cout << "inserisci dieci numeri"<<endl;
    int n;
    int positivi=0;
    int negativi=0;
    int nulli=0;
    for(int i=1;i<=10;i=i+1)
    {
        cin>>n;
        if(n>0)
        {positivi=positivi+1;}
        else
        {
            if(n==0)
            {nulli=nulli+1;}
            else
            {negativi=negativi+1;}
        }
    }

    cout <<"ho letto "<< positivi <<" numeri positivi"<<endl;
    cout <<"ho letto "<< negativi <<" numeri negativi"<<endl;
    cout <<"ho letto "<< nulli <<" numeri nulli"<<endl;

   return 0;
}



