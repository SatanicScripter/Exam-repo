//Programma che stampa la tavola pitagorica con una matrice
#include <iostream>
#include <iomanip>
using namespace std;

//Prototipi
void stampa(int [][10],int,int);
int main(){
    //Costanti
    //Identificatori
    int righe=10;
    int colonne=10;
    int mat[10][10];
    //Start
    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++)
            mat[i][j]=(i+1)*(j+1);
    }
    cout<<"Matrice:"<< righe << "x" << colonne << endl;
    stampa(mat, righe, colonne);
    return 0;
}
void stampa(int mat[][10],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<mat[i][j]<< "\t";
            cout<<endl;
    }
}
