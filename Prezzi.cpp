#include <iostream>
using namespace std;

int main() {
	//Identificatori
	int n;
	int num;
	int somma=0;
	int conta=0;
	//costanti
	float media;
	//START
	cin >> n;
	cout<<"Quanti articoli vuoi inserire? "<<n<<endl;
	while(conta<n)
	{
	    cin >> num;
	    cout<<"Inserici un prezzo "<<num<<endl;
	    somma+=num;
	    conta++;
	}
	if(conta==0)
	media=0;
	else
	media=(float)somma/conta;
	cout<<"La somma è "<<somma<<endl;
	cout<<"La media è "<<media<<endl;
	return 0;
}
