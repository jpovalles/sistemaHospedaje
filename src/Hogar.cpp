//
// Created by LENOVO on 19/03/2023.
//

#include "Hogar.h"

using namespace std;

Hogar::Hogar(string direccion, string descripcion, int camas, int bebes):direccion(direccion), descripcion(descripcion), camas(camas), bebes(bebes){}

string Hogar::getDireccion(){
    return direccion;
}

string Hogar::getDescripcion(){
    return descripcion;
}

int Hogar::getCamas(){
    return camas;
}

int Hogar::getBebes(){
    return bebes;
}