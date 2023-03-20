//
// Created by jpova on 20/03/2023.
//

#ifndef SISTEMAHOSPEDAJE_EVALUACION_H
#define SISTEMAHOSPEDAJE_EVALUACION_H

#include <iostream>
#include <string>

using namespace std;

class Evaluacion {
private:
    string fecha;
    int calificacion;
    string comentario;
    string origen;
    string destino;
public:
    Evaluacion() = default;
    Evaluacion(string fecha, int calificacion, string comentario);
};


#endif //SISTEMAHOSPEDAJE_EVALUACION_H
