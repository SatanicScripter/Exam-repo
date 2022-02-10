//Programma che stampa la tavola pitagorica
#include <iostream>
using namespace std;

main(){
	//Identificatori
	int i;
	int j;
	//Costanti
	const int n=10;
    //START
    cout<<"Ecco la tavola pitagorica: "<<endl;
    //Ciclo for che stampa i valori
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++)
			cout<<"\t"<<i*j;
		cout<<endl;
	}
	return 0;
	}
