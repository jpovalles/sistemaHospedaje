//
// Created by jpova on 19/03/2023.
//
#include <iostream>

#ifndef SISTEMAHOSPEDAJE_HUESPED_H
#define SISTEMAHOSPEDAJE_HUESPED_H

using namespace std;

class huesped {
private:
    int id;
    string nombre;
    string sexo;
    string fechaNacimiento;
    float puntaje;
    string clinica;
    string procedencia;
public:
    huesped() = default;
    huesped(int id, string nombre, string sexo, string fechaNacimiento, float puntaje, string clinica, string procedencia);
    ~huesped();

    //void setId(int id);
    int getId();

    //void setNombre(string nombre);
    string getNombre();

    //void setSexo(string sexo);
    string getSexo();

    //void setNacimiento(string fechaNacimiento);
    string getNacimiento();

    void setPuntaje(float puntaje);
    int getPuntaje();

    //void setClinica(string clinica);
    string getClinica();

    //void setProcedencia(string procedencia);
    string getProcedencia();
};


#endif //SISTEMAHOSPEDAJE_HUESPED_H
