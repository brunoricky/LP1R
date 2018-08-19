#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio *Horario1 = new Relogio();

    int hora, minuto, segundo;

   cout << "Digite a(s) hora(s): "; cin >> hora;
   cout << "\nDigite o(s) minuto(s): "; cin >> minuto;
   cout << "\nDigite o(s) segundo(s): "; cin >> segundo;

   Horario1->setHorario(hora, minuto, segundo);

   cout << "\nA hora e: " << Horario1->getHora() << ":" << Horario1->getMinuto() << ":" << Horario1->getSegundo();

   while(1){
        Horario1->avancarHorario(Horario1->getHora(), Horario1->getMinuto(), Horario1->getSegundo());

        cout <<"\n\n" << Horario1->getHora() << ":" << Horario1->getMinuto() << ":" << Horario1->getSegundo();
        cout << "\n";

        system("pause");
   }

    return 0;
}
