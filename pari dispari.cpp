#include <iostream>
using namespace std;

int main(){
    //Identificatori
    int n;
    //costanti
    //START
    cin>>n;
    cout<<"Il numero è: "<<n<<endl;
    if(n>=0)
    cout<<"Il numero è positivo"<<endl;
    else
    cout<<"Il numero è negativo"<<endl;
    if((n%2)==0)
    cout<<"Il numero è pari"<<endl;
    else
    cout<<"Il numero è dispari"<<endl;
    return 0;
    
}