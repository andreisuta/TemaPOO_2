
#include "Abonat_Skype_Extern.h"
    Abonat_Skype_Extern::Abonat_Skype_Extern(int ID, string NUME, string NR_TELEFON, string ID_SKYPE, string TARA){
        this->id=ID;
        this->nume=NUME;
        this->nr_telefon=NR_TELEFON;
        this->id_skype=ID_SKYPE;
        this->tara=TARA;
    }
    Abonat_Skype_Extern::Abonat_Skype_Extern(){
        this->id=-1;
        this->nume="0";
        this->nr_telefon="0";
        this->id_skype="0";
        this->tara="0";
    }

