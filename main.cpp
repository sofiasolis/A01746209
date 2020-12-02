// SofiaSolisA01746209.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <string>
#include "Telefono.h"
#include "Auricular.h"


using namespace std;

void telsCasa(Telefono t1, Telefono t2, Telefono t3) {
    vector<Telefono> vectorTelefonos;
    vectorTelefonos.push_back(t1);
    vectorTelefonos.push_back(t2);
    vectorTelefonos.push_back(t3);

    for (int i = 0; i < vectorTelefonos.size(); i++) {
        cout << endl << vectorTelefonos[i].print() << endl;
    }
}

int main()
{
    Telefono t1 = Telefono();
    Telefono t2 = Telefono(Auricular(), "Rojo");
    Telefono t3 = Telefono(Auricular("Morado", 24, 275.29), "Carmesi");

    telsCasa(t1, t2, t3);
}