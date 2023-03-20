//
// Created by jpova on 19/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_RESERVA_H
#define SISTEMAHOSPEDAJE_RESERVA_H

#include <iostream>
#include <string>
#include "huesped.h"
#include "Propietario.h"
#include "app.h"

using namespace std;

class Reserva {
private:
    string fechaInicio;
    string fechaFin;
public:
    Reserva() = default;
    Reserva(string fechaInicio,string fechaFin);
    ~Reserva();

};


#endif //SISTEMAHOSPEDAJE_RESERVA_H
