#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //identificatori
    int n_estrazioni;
    int n_studenti;
    int conta=0;
    int n_random;
    //costanti
    const int min_estrazioni=1;
    const int max_estrazioni=100;
    const int min_studenti=1;
    //START
    srand (time(NULL));
    do{
        cout<< "Quante estrazioni non valide desideri?" << endl;
        cin>> n_estrazioni;
    }
    while(n_estrazioni<min_estrazioni || n_estrazioni>max_estrazioni);
    do{
        cout<< "Quanti studenti sono nella classe? "<<endl;
        cin >> n_studenti;
    }
    while(n_studenti<min_studenti);
    while(conta<=n_estrazioni) {
       conta++;
       n_random=(rand()%n_studenti)+1;
       cout << n_random << endl;
    }
    return 0;
}

