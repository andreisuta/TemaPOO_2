

#ifndef TEMAPOO2_AGENDAEXTERN_H
#define TEMAPOO2_AGENDAEXTERN_H

#include "Abonat_Skype_Extern.h"
#include <vector>
class AgendaExtern{
public:
    vector<Abonat_Skype_Extern> agendae;
    int size;
    AgendaExtern();
    ~AgendaExtern();
    AgendaExtern(const AgendaExtern &a2);
    AgendaExtern&operator=(const AgendaExtern& agendaa);
    AgendaExtern&operator[](int x);
};

#endif //TEMAPOO2_AGENDAEXTERN_H
