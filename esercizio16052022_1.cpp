#include <iostream>
#include <iomanip>
using namespace std;

struct studenti{
    string cognome;
    string nome;
    float voto;
};
int main(){
    //Identificatori
    int nstudenti;
    struct studenti terzasia[300];
    //Costanti
    //Start
    cout<<"Quanti sono gli studenti nella classe?"<<endl;
    cin>>nstudenti;
    for(int i=0;i<nstudenti;i++){
            cout<<"Inserisci il nome dello studente "<<i+1<<endl;
    cin>>terzasia[i].nome;
    cout<<"Inserisci il cognome dello studente "<<i+1<<endl;
    cin>>terzasia[i].cognome;
    cout<<"Inserisci il voto dello studente "<<i+1<<endl;
    cin>>terzasia[i].voto;
    }
        cout<<"Numero";
        cout<<setw(6)<<"Nome";
        cout<<setw(11)<<"Cognome";
        cout<<setw(10)<<"Voto"<<endl;
    for(int j=0;j<nstudenti;j++) {
        cout<<j+1;
        cout<<setw(12)<<terzasia[j].nome;
        cout<<setw(10)<<terzasia[j].cognome;
        cout<<setw(8)<<terzasia[j].voto<<endl;
    }
    return 0;
}
