    /*
Verificare se una matrice 6x6 è la matrice identità
(la matrice identità è formata da zeri su tutte le celle tranne quelle della diagonale dove ci sono uni)
*/
#include <iostream>
using namespace std;
int main()
{
    int m[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
                cout<<"inserisci il valore 0 o 1 della cella ("<<i<<","<<j<<") ";
                cin>>m[i][j];
        }
    }

    bool proprieta=true;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i!=j&&m[i][j]!=0)
            {
                proprieta=false;
            }
            if(i==j&&m[i][j]!=1)
            {
                proprieta=false;
            }
        }
    }

    if( )
    {
        cout<<"e' la matrice identita'"<<endl;
    }
    else
    {
        cout<<"NON e' la matrice identita'"<<endl;
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

