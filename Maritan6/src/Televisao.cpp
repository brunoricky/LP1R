#include "Televisao.h"

void Televisao::aumentaVolume()
{
    this->volume++;
}

void Televisao::diminuiVolume()
{
    this->volume--;
}

void Televisao::aumentaCanal(){
    this->canal++;
}

void Televisao::diminuiCanal(){
    this->canal--;
}

void Televisao::setCanal(int canal){
    this->canal = canal;
}

int Televisao::getCanal(){
    return this->canal;
}

int Televisao::getVolume(){
    return this->volume;
}

