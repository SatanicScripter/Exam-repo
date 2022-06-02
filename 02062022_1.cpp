#include <iostream>
#include <iomanip>
using namespace std;

const int N = 3;

//Prototipi
void popola(int matrice[N][N]);
void stampa(int matrice[N][N]);

int main(){
    //Identificatori
    int matrice[N][N];
    //Costanti
    //Start
    popola(matrice);
    stampa(matrice);
}
void popola(int matrice[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j< N;j++){
                cout<<"Inserire il valore della matrice in ("<< j <<","<< j <<")";
        cin>>matrice[i][j];
        }
    }
    return;
}
void stampa(int matrice[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j< N;j++){
        cout<<setw(5)<<matrice[i][j];
        }
        cout<<endl;
    }
    return;
}
