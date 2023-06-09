//
// Created by jpova on 20/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_EVALUACION_H
#define SISTEMAHOSPEDAJE_EVALUACION_H

#include <iostream>
#include <string>
#include "huesped.h"
#include "Propietario.h"


using namespace std;

class Evaluacion {
private:
    string fecha;
    float calificacion;
    string comentario;
    string origen;
    string destino;
public:
    Evaluacion() = default;
    Evaluacion(string fecha, float calificacion, string comentario, string origen, string destino);

    void actualizarPuntajeH(huesped* pHuesped);
    void actualizarPuntajeP(Propietario* pPropietario);

};


#endif //SISTEMAHOSPEDAJE_EVALUACION_H
