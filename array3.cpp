//Memorizzare in un array di 100 posti i primi cento numeri naturali in ordine inverso.
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Identificatori
  int a[100];
  //Costanti
  //Start
  cout<<"Ecco la successione dei primi cento numeri in ordine inverso: "<<endl;
  for(int i=0;i<100;i++)
  {
      a[i]=99-i;
  }

  // per stampare
  for(int i=0;i<100;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
