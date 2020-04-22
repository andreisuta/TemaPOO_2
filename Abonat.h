//
// Created by Iulia on 22/04/2020.
//

#ifndef TEMAPOO2_ABONAT_H
#define TEMAPOO2_ABONAT_H

#include "Persoana.h"
#include <string>
using namespace std;
class Abonat : public Persoana{
protected:
    string nr_telefon;
public:
    Abonat(int ID, string NUME, string NR_TELEFON);
    Abonat();
    string getNr_Telefon();
    void setNr_Telefon(string NR);
};
#endif //TEMAPOO2_ABONAT_H
