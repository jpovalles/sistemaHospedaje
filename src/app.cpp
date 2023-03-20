//
// Created by jpova on 19/03/2023.
//

#include "app.h"

void app:: agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, int puntaje, string clinica, string procedencia){
    huesped* pHuespedTemp = new huesped(id, nombre, sexo, fechaNacimiento, puntaje, clinica, procedencia);

    this->mapaHuespedes.insert(make_pair(pHuespedTemp->getId(), pHuespedTemp));
}