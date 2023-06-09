//
// Created by LENOVO on 19/03/2023.
//

#include "Propietario.h"
using namespace std;

Propietario::Propietario(int id, string nombre, string sexo, string nacimiento, float puntaje, int disponibilidad): id(id), nombre(nombre), sexo(sexo), nacimiento(nacimiento), puntaje(puntaje), disponibilidad(disponibilidad){}

void Propietario::agregarHogar(string direccion, string descripcion, int camas, int bebes){
    this->pHogar = new Hogar(direccion, descripcion, camas, bebes);
}

int Propietario::getId(){
    return id;
}

string Propietario::getNombre(){
    return nombre;
}

string Propietario::getSexo(){
    return sexo;
}

string Propietario::getNacimiento(){
    return nacimiento;
}

void Propietario::setPuntaje(float puntaje){
    this->puntaje = puntaje;
}

int Propietario::getPuntaje(){
    return puntaje;
}

void Propietario::setDisponibilidad(int disponibilidad){
    this->disponibilidad = disponibilidad;
}
int Propietario::getDisponibilidad(){
    return disponibilidad;
}

Hogar* Propietario::getHogar(){
    return pHogar;
}