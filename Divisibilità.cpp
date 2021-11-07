#include <iostream>
using namespace std;

int main() {
    //Identificatori
    int n;
    //Costanti
    //START
    cout<<"Inserire un numero"<<endl;
    cin>>n;
    cout<<"Il numero è: "<<n<<endl;
    if((n%2)==0)
    cout<<"Il numero è divisibile per due"<<endl;
    else
    if((n%3)==0)
    cout<<"Il numero è divisibile per tre"<<endl;
    else
    if((n%5)==0)
    cout<<"Il numero è divisibile per cinque"<<endl;
    else
    if((n%7)==0)
    cout<<"Il numero è divisibile per sette"<<endl;
    else
    cout<<"Il numero non è divisibile per 2, 3, 4, 5, 7"<<endl;
    
	return 0;
}
