#include <iostream>
#include<cstring>
#include<vector>
#include"Persoana.h"
#include"Abonat.h"
#include "Abonat_Skype.h"
#include "Abonat_Skype_Romania.h"
#include "Abonat_Skype_Extern.h"
#include "Agenda.h"
using namespace std;
istream& operator >>(istream& input, Abonat_Skype_Romania& obj){
    int ID;
    string NUME, NR_TELEFON, ID_SKYPE, ADRESA_MAIL;
    input >> ID;
    obj.setID(ID);
    input >> NUME;
    obj.setNume(NUME);
    input >> NR_TELEFON;
    obj.setNr_Telefon(NR_TELEFON);
    input >> ID_SKYPE;
    obj.setId_Skype(ID_SKYPE);
    input >> ADRESA_MAIL;
    obj.setAdresa_Mail(ADRESA_MAIL);
    return input;
}

ostream& operator <<(ostream& output, Agenda& obj){
    for(int i=0; i<obj.size; i++){
        output<<obj.agenda[i].getID()<<"  "<<obj.agenda[i].getNume()<<"  "<<obj.agenda[i].getNr_Telefon()<<"  "<<obj.agenda[i].getId_Skype()<<"  "<<obj.agenda[i].getAdresa_Mail()<<endl;
    }
    return output;
}

int main(){
    Agenda AGENDA;
    Abonat_Skype_Romania ABONAT;
    int i, n;
    cin>>n;
    AGENDA.size=n;
    for(i=0; i<AGENDA.size; i++){
        cin>>ABONAT;
        AGENDA.agenda.push_back(ABONAT);
    }
    cout<<AGENDA;
    return 0;
}