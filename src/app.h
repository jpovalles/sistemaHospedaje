//
// Created by jpova on 19/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_APP_H
#define SISTEMAHOSPEDAJE_APP_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include "huesped.h"
#include "Propietario.h"
#include "Hogar.h"

using namespace std;


class app {
private:
    unordered_map<int, huesped*> mapaHuespedes;
public:
    app() = default;
    ~app();
    void agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, int puntaje, string clinica, string procedencia);
};


#endif //SISTEMAHOSPEDAJE_APP_H
