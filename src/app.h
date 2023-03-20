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
    unordered_map<int, Propietario*> mapaPropietarios;
public:
    app() = default;

    void agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, int puntaje, string clinica, string procedencia);
    void mostrarHuespedes();

    void inscribirPropietario(int id, string nombre, string sexo, string nacimiento, int puntaje, int disponibilidad, string direccion, int camas, int bebe, string descripcion);
    void mostrarPropietarios();
};


#endif //SISTEMAHOSPEDAJE_APP_H
