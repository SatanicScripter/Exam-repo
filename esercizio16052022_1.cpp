#include <iostream>
using namespace std;

struct studenti{
    string cognome;
    string nome;
    float voto;
};
int main(){
    //Identificatori
    int nstudenti;
    struct studenti terzasia;
    //Costanti
    //Start
    cout<<"Quanti sono gli studenti nella classe?"<<endl;
    cin>>nstudenti;
    for(int i=0;i<nstudenti;i++){
            cout<<"Inserisci il nome dello studente "<<i<<endl;
    cin>>terzasia.nome;
    cout<<"Inserisci il cognome dello studente "<<i<<endl;
    cin>>terzasia.cognome;
    cout<<"Inserisci il voto dello studente "<<i<<endl;
    cin>>terzasia.voto;
    }
    return 0;
}
