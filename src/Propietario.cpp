//
// Created by LENOVO on 19/03/2023.
//

#include "Propietario.h"
using namespace std;

Propietario::Propietario(int id, string nombre, string sexo, string nacimiento, int puntaje, int disponibilidad): id(id), nombre(nombre), sexo(sexo), nacimiento(nacimiento), puntaje(puntaje), disponibilidad(disponibilidad){}

void Propietario::agregarHogar(string direccion, string descripcion, int camas, int bebes){
    this->pHogar = new Hogar(direccion, descripcion, camas, bebes);
}

void Propietario::setId(int id){
    this->id = id;
}
int Propietario::getId(){
    return id;
}

void Propietario::setNombre(string nombre){
    this->nombre = nombre;
}
string Propietario::getNombre(){
    return nombre;
}

void Propietario::setSexo(string sexo){
    this->sexo = sexo;
}
string Propietario::getSexo(){
    return sexo;
}

void Propietario::setNacimiento(string nacimiento){
    this->nacimiento = nacimiento;
}
string Propietario::getNacimiento(){
    return nacimiento;
}

void Propietario::setPuntaje(int puntaje){
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