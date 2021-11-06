
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    //identificatori
    int a;
    int b;
    int c;
    int x;
//costanti
//start
    cout << "Introduci il coefficente a" << endl ;
    cin >> a;
    cout << "Introduci coefficente b" << endl ;
    cin >> b;
    cout << "Introduci coefficente c" << endl ;
    cin >> c;
    if (a!=0) {
        cout << "L'equazione è di secondo grado" << endl ;
    }
    else{
        if (b!=0) {
            cout << "L'equazione è di primo grado" << endl ;
        x=-c/b;
        cout << "Il risultato è" << x ;    
        }
        else{
            cout << "L'equazione è indeterminata" << endl ;
        }
        }
    if (c!=0)
        cout << "L'equazione è indeterminata" << endl ;
    else{
        cout << "L'eqauzione è vera" << endl ;
    }            
    return 0;
}