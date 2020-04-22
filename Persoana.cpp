//
// Created by Iulia on 22/04/2020.
//

#include "Persoana.h"
using namespace std;
    Persoana::Persoana(int ID, string NUME){
        this->id=ID;
        this->nume=NUME;
    }
    Persoana::Persoana(){
        this->id=-1;
        this->nume="0";
    }
    int Persoana::getID(){
        return this->id;
    }
    string Persoana::getNume(){
        return this->nume;
    }
    void Persoana::setID(int ID){
        this->id=ID;
    };
    void Persoana::setNume(string NUME){
        this->nume=NUME;
    }
