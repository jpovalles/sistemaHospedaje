//
// Created by jpova on 19/03/2023.
//
#include "app.h"
#include "huesped.h"
#include "Propietario.h"
#include "Hogar.h"


#include <iostream>

int main() {
    std::cout << "Hello, World! src" << std::endl;
    return 0;
}

//string direccion, string descripcion, int camas, int bebes

void crearPropietario(app* pApp){
    int id;
    int puntaje = 0, disponibilidad = 1;
    string nombre, sexo, nacimiento;
    cout << "Ingrese su identificacion unica:" << endl;
    cin >> id;
    cout << "Ingrese su sexo (F o M)" << endl;
    cin >> sexo;
    cout << "Ingrese su fecha de nacimiento:" << endl;
    cin >> nacimiento;

    int camas, bebes;
    string direccion, descripcion;
    cout << "Ingrese la direccion de su hogar:" << endl;
    cin >> direccion;
    cout << "Ingrese una breve descripcion de su hogar:" << endl;
    cin >> descripcion;
    cout << "Cuantas camas tiene su hogar?" << endl;
    cin >> camas;
    cout << "Puede alojar bebes? (0)NO (1)SI" << endl;
    cin >> bebes;

    pApp->inscribirPropietario(id, nombre,sexo, nacimiento, puntaje, disponibilidad, direccion, camas, bebes, descripcion);
}