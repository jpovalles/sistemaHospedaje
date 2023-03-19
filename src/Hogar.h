//
// Created by LENOVO on 19/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_HOGAR_H
#define SISTEMAHOSPEDAJE_HOGAR_H

#include <iostream>
#include <string>

using namespace std;

class Hogar {
private:
    string direccion;
    string descripcion;
    int camas;
    int bebes;

public:
    Hogar(string direccion, string descripcion, int camas, int bebes);
};


#endif //SISTEMAHOSPEDAJE_HOGAR_H
