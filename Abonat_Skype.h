//
// Created by Iulia on 22/04/2020.
//

#ifndef TEMAPOO2_ABONAT_SKYPE_H
#define TEMAPOO2_ABONAT_SKYPE_H
#include<iostream>
#include"Abonat.h"
#include "Persoana.h"
#include<string>
using namespace std;
class Abonat_Skype : public Abonat{
protected:
    string id_skype;
public:
    Abonat_Skype(int ID, string NUME, string NR_TELEFON, string ID_SKYPE);
    Abonat_Skype();
    string getId_Skype() const;
    void setId_Skype(string ID);
};
#endif //TEMAPOO2_ABONAT_SKYPE_H
