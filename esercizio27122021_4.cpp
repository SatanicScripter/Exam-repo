//Scrivere un programma che estragga il numero di teste e di croci nel lancio di una moneta
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int main()
{
    srand(time(NULL));
    int teste=0;
    int croci=0;
    for(int i=0;i<3;i++)
    {
        if(rand()%2==0)
        {
            cout<<"testa"<<endl;
            teste++;
        }
        else
        {
            cout<<"croce"<<endl;
            croci++;
        }
    }

    cout<<"sono uscite "<<teste<<" teste ";
    cout<<" e "<<croci<<" croci";

}
