#include <iostream>
#include "Televisao.h"

using namespace std;

int main()
{

    Televisao *Tele1 = new Televisao();

    Tele1->setCanal(34);
    cout << "O atual canal eh: " << Tele1->getCanal() << endl;

    Tele1->setCanal(50);
    cout << "O atual canal eh: " << Tele1->getCanal() << endl;

    Tele1->setCanal(45);
    cout << "O atual canal eh: " << Tele1->getCanal() << endl;

    cout << "O atual volume eh: " << Tele1->getVolume() << endl;

    Tele1->aumentaVolume();
    Tele1->aumentaVolume();

    cout << "O atual volume eh: " << Tele1->getVolume() << endl;

    Tele1->diminuiVolume();

    cout << "O atual volume eh: " << Tele1->getVolume() << endl;

    return 0;
}
