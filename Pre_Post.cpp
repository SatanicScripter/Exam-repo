#include <iostream>
using namespace std;

int main() {
	//Identificatori
	int i=15, a;
	//Costanti
	//START
	a=(i++)*2;
	cout << "Post incremento "<<a<<", "<<i<<endl;
	i=15;
	a=(++i)*2;
	cout<<"Pre incremento "<<a<<", "<<i<<endl;
	return 0;
}
