

#ifndef TEMAPOO2_PERSOANA_H
#define TEMAPOO2_PERSOANA_H
#include <string>
using namespace std;


class Persoana{
protected:
    int id;
    string nume;
public:
    Persoana(int ID, string NUME);
    Persoana();
    int getID();
    string getNume();
    void setID(int ID);
    void setNume(string NUME);
};


#endif //TEMAPOO2_PERSOANA_H
