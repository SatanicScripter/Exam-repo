#include <cstdlib>
#include <iostream>

using namespace std;
struct studente{
    string nome;
    string cognome;
    int giorno;
    int mese;
    int anno;
};
struct classe{
    int anno;
    string sezione;
    string indirizzo;
};
int main(int argc, char** argv) {
/*  string studente= "Enrico Peggion 1/01/2005";
    string studente2= "Bazan Federico 1/03/2005";
    string nome="Enrico";
    string cognome="Peggion";
    string data="1/01/2005";

 * cout<<studente<<endl;
    cout<<studente2<<endl;

 * cout<<nome<<endl;
    cout<<cognome<<endl;
    cout<<data<<endl;*/

    //Identificatori
    studente s1;
    studente s2;
    classe c1;

    //Costanti
    //Start
    s1.nome="Enrico";
    s1.cognome="Peggion";
    s1.giorno=1;
    s1.mese=01;
    s1.anno=2005;

    s2.nome="Federico";
    s2.cognome="Bazan";
    s2.giorno=1;
    s2.mese=03;
    s2.anno=2005;

    c1.anno=3;
    c1.indirizzo="B";
    c1.sezione="SIA";

    cout<<"Primo studente"<<endl;
    cout<<s1.nome;
    cout<<" "<<s1.cognome<<endl;
    cout<<s1.giorno<<" / ";
    cout<<s1.mese<<" / ";
    cout<<s1.anno<<endl;
    cout<<c1.anno<<" ";
    cout<<c1.indirizzo<<" ";
    cout<<c1.sezione<<endl;
    cout<<"____________________"<<endl;
    cout<<"Secondo studente"<<endl;
    cout<<s2.nome;
    cout<<" "<<s2.cognome<<endl;
    cout<<s2.giorno<<" / ";
    cout<<s2.mese<<" / ";
    cout<<s2.anno<<endl;
    cout<<c1.anno<<" ";
    cout<<c1.indirizzo<<" ";
    cout<<c1.sezione<<endl;
    return 0;
}

