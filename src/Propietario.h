//
// Created by LENOVO on 19/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_PROPIETARIO_H
#define SISTEMAHOSPEDAJE_PROPIETARIO_H

#include <iostream>
#include <string>
#include "Hogar.h"
#include <unordered_map>

using namespace std;

class Propietario {
private:
    int id;
    string nombre;
    string sexo;
    string nacimiento;
    float puntaje;
    int disponibilidad;
    Hogar* pHogar;



public:
    Propietario(int id, string nombre, string sexo, string nacimiento, float puntaje, int disponibilidad);
    ~Propietario();
    void agregarHogar(string direccion, string descripcion, int camas, int bebes);
    int getId();
    string getNombre();
    string getSexo();
    string getNacimiento();
    void setPuntaje(float puntaje);
    int getPuntaje();
    void setDisponibilidad(int disponibilidad);
    int getDisponibilidad();
    Hogar* getHogar();
};


#endif //SISTEMAHOSPEDAJE_PROPIETARIO_H
