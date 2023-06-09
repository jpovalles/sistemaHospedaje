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
#include "Reserva.h"
#include "Evaluacion.h"

using namespace std;


class app {
private:
    unordered_map<int, huesped*> mapaHuespedes;
    unordered_map<int, Propietario*> mapaPropietarios;
    unordered_map<int, Reserva*> listaReservas;
    vector<Evaluacion> listaEvaluaciones;
public:
    app() = default;

    void agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, float puntaje, string clinica, string procedencia);
    void mostrarHuespedes();
    unordered_map<int, huesped*> getMapaH();

    void inscribirPropietario(int id, string nombre, string sexo, string nacimiento, float puntaje, int disponibilidad, string direccion, int camas, int bebe, string descripcion);
    void mostrarHogares();
    unordered_map<int, Propietario*> getMapaProp();

    void reservas(string fechaInicio, string fechaFin, Propietario* pPropietario, huesped* pHuesped);
    unordered_map<int, Reserva*> getMapaReservas();
    void checkout(int id);

    void agregarEvaluacion(Evaluacion tempEvo);
};


#endif //SISTEMAHOSPEDAJE_APP_H
