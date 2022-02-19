//Leggere un array di 10 posizioni e dire se ogni valore memorizzato nell’array è minore del quadrato del numero nella cella precedente.
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
  //Identificatori
  int a[10];
  bool condizione=true;
  //Costanti
  //Start
  cout<<"inserire 10 valori"<<endl;
  for (int i = 0; i<10; i++)
    {
      cin >> a[i];
    }
  for(int i=1;i<10;i++)
  {
    if(a[i]<a[i-1]*a[i-1])
        {condizione=false;}
  }
  if(condizione){cout<<"la condizione e' rispettata";}
  else{cout<<"la condizione NON e' rispettata";}

  return 0;
}
