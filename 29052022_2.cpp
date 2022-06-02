/*
Memorizzare in un array bidimensionale 5 per 5 tutti zeri tranne nelle celle della diagonale
principale dove memorizzare uno
*/
#include <iostream>
using namespace std;

int main()
{
    //Identificatori
    int matrice[5][5];
    //Costanti
    //Start
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j)
            {
                matrice[i][j]=1;
            }
            else
            {
                matrice[i][j]=0;
            }
        }
    }
    cout<<"La matrice: "<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout<<endl;
    }
}


