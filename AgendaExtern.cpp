
#include "AgendaExtern.h"
#include "Abonat_Skype_Extern.h"
AgendaExtern::AgendaExtern(){
    size=0;
}
AgendaExtern::~AgendaExtern(){
    size=0;
}
AgendaExtern::AgendaExtern(const AgendaExtern &a2){
    for(int i=0;i<size;i++)
        agendae[i]=a2.agendae[i];
}
AgendaExtern& AgendaExtern::operator=(const AgendaExtern& agendaa){
    if(size!=agendaa.size)
        return *this;
    for(int i=0;i<size;i++){
        if(agendae[i].getId_Skype()!=agendaa.agendae[i].getId_Skype())
            return *this;
    }
}
AgendaExtern&AgendaExtern::operator[](int x) {
    return reinterpret_cast<AgendaExtern &>(agendae[x]);
}
