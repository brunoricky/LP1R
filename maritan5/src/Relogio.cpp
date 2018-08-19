#include "Relogio.h"

void Relogio::setHorario(int hora, int minuto, int segundo)
{
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

int Relogio::getHora(){
    return this->hora;
}

int Relogio::getMinuto(){
    return this->minuto;
}

int Relogio::getSegundo(){
    return this->segundo;
}

void Relogio::avancarHorario(int hora, int minuto, int segundo){
    if(this->segundo<59){
        this->segundo++;
    }
    else if(this->segundo==59){
        this->segundo=00;
        this->minuto++;
    }
    else if(this->minuto<59){
        this->minuto++;
    }
    else if(this->minuto==59){
        this->minuto=0;
        this->hora++;
    }
    else if(this->hora<24){
        this->hora = 1;
    }
}
