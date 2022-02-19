//Leggere e memorizzare in un array sette numeri, dopo averli letti contare quante volte è stato memorizzato lo zero.
#include <iostream>
using namespace std;

int main()
{
  float a[7];

  //per memorizzare
  for(int i=0;i<7;i++)
  {
      cout<<"Inserisci un numero"<<endl;
      cin>>a[i];
  }

  //per calcolare il numero di zeri
  int zeri=0;
  for(int i=0;i<7;i++)
  {
      if(a[i]==0)
      {
         zeri++;
      }
  }

  cout<<"il numero di zeri "<<zeri;


}
