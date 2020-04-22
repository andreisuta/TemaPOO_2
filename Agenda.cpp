
#include "Agenda.h"
#include "Abonat_Skype_Romania.h"
    Agenda::Agenda(){
        size=0;
    }
    Agenda::~Agenda(){
        size=0;
    }
    Agenda::Agenda(const Agenda &a2){
        for(int i=0;i<size;i++)
            agenda[i]=a2.agenda[i];
    }
    Agenda& Agenda::operator=(const Agenda& agendaa){
    if(size!=agendaa.size)
        return *this;
    for(int i=0;i<size;i++){
        if(agenda[i].getId_Skype()!=agendaa.agenda[i].getId_Skype())
            return *this;
        }
    }
    Agenda&Agenda::operator[](int x) {
    return reinterpret_cast<Agenda &>(agenda[x]);
}


