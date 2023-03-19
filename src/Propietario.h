//
// Created by LENOVO on 19/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_PROPIETARIO_H
#define SISTEMAHOSPEDAJE_PROPIETARIO_H

#include <iostream>
#include <string>
#include "Hogar.h"

using namespace std;

class Propietario {
private:
    int id;
    string nombre;
    string sexo;
    string nacimiento;
    int puntaje;
    int recibirHuesped;
    Hogar* pHogar;

public:
    Propietario(int id, string nombre, string sexo, string nacimiento, int puntaje, int recibirHuesped);
};


#endif //SISTEMAHOSPEDAJE_PROPIETARIO_H
