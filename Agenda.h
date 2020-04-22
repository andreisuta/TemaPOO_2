

#ifndef TEMAPOO2_AGENDA_H
#define TEMAPOO2_AGENDA_H

#include "Abonat_Skype_Romania.h"
#include <vector>
class Agenda{
public:
    vector<Abonat_Skype_Romania> agenda;
    int size;
    Agenda();
    ~Agenda();
    Agenda(const Agenda &a2);
    Agenda&operator=(const Agenda& agendaa);
    Agenda&operator[](int x);
};
#endif //TEMAPOO2_AGENDA_H
