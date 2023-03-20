//
// Created by jpova on 19/03/2023.
//

#include "huesped.h"

huesped::huesped(int id, string nombre, string sexo, string fechaNacimiento, float puntaje, string clinica,
                 string procedencia): id(id), nombre(nombre), sexo(sexo), puntaje(puntaje), clinica(clinica), procedencia(procedencia){}

                 /*
void huesped:: setId(int id){
    this->id = id;
}
void huesped:: setNombre(string nombre){
    this->nombre = nombre;
}
void huesped:: setSexo(string sexo){
    this->id = id;
}
void huesped:: setNacimiento(string fechaNacimiento){
    this->fechaNacimiento = fechaNacimiento;
}

void huesped:: setPuntaje(float puntaje){
    this->puntaje = puntaje;
}

void huesped:: setClinica(string clinica){
    this->clinica = clinica;
}

void huesped:: setProcedencia(string procedencia){
    this->procedencia = procedencia;
}
*/

int huesped:: getId(){
    return this->id;
}

string huesped:: getNombre(){
    return this->nombre;
}

string huesped:: getSexo(){
    return this->sexo;
}

string huesped:: getNacimiento(){
    return this->fechaNacimiento;
}

int huesped:: getPuntaje(){
    return this->puntaje;
}

string huesped:: getClinica(){
    return this->clinica;
}

string huesped:: getProcedencia(){
    return this->procedencia;
}