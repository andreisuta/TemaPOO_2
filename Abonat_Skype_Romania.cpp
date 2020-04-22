
#include "Abonat_Skype_Romania.h"
    Abonat_Skype_Romania::Abonat_Skype_Romania(int ID, string NUME, string NR_TELEFON, string ID_SKYPE, string ADRESA_MAIL){
        this->id=ID;
        this->nume=NUME;
        this->nr_telefon=NR_TELEFON;
        this->id_skype=ID_SKYPE;
        this->adresa_mail=ADRESA_MAIL;
    }
    Abonat_Skype_Romania::Abonat_Skype_Romania(){
        this->id=-1;
        this->nume="0";
        this->nr_telefon="0";
        this->id_skype="0";
        this->adresa_mail="0";
    }
    string Abonat_Skype_Romania::getAdresa_Mail() const {
        return this->adresa_mail;
    }
    void Abonat_Skype_Romania::setAdresa_Mail(string MAIL){
        this->adresa_mail=MAIL;
    }
    Abonat_Skype_Romania::Abonat_Skype_Romania(const Abonat_Skype_Romania &ab2){
        id=ab2.id;
        nume=ab2.nume;
        nr_telefon=ab2.nr_telefon;
        id_skype=ab2.id_skype;
        adresa_mail=ab2.adresa_mail;
    }

