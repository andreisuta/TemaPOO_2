//
// Created by Iulia on 22/04/2020.
//
#include "Abonat.h"
#include "Abonat_Skype.h"
#include "Persoana.h"
#include<string>
using namespace std;
    Abonat_Skype::Abonat_Skype(int ID, string NUME, string NR_TELEFON, string ID_SKYPE){
        this->id=ID;
        this->nume=NUME;
        this->nr_telefon=NR_TELEFON;
        this->id_skype=ID_SKYPE;
    }
    Abonat_Skype::Abonat_Skype(){
        this->id=-1;
        this->nume="0";
        this->nr_telefon="0";
        this->id_skype="0";
    }
    string Abonat_Skype::getId_Skype() const {
        return this->id_skype;
    }
    void Abonat_Skype::setId_Skype(string ID){
        this->id_skype=ID;
    }
