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
    int puntaje;
    int recibirHuesped;
    int disponibilidad;
    Hogar* pHogar;



public:
    Propietario(int id, string nombre, string sexo, string nacimiento, int puntaje, int disponibilidad);
    void agregarHogar(string direccion, string descripcion, int camas, int bebes);
    void setId(int id);
    int getId();
    void setNombre(string nombre);
    string getNombre();
    void setSexo(string sexo);
    string getSexo();
    void setNacimiento(string nacimiento);
    string getNacimiento();
    int getPuntaje();
    void setDisponibilidad(int disponibilidad);
    int getDisponibilidad();

};


#endif //SISTEMAHOSPEDAJE_PROPIETARIO_H
