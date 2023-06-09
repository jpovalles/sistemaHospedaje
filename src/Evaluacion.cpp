//
// Created by jpova on 20/03/2023.
//

#include "Evaluacion.h"

Evaluacion ::Evaluacion(string fecha, float calificacion, string comentario, string origen, string destino):fecha(fecha), calificacion(calificacion), comentario(comentario), origen(origen), destino(destino){}

void Evaluacion::actualizarPuntajeH(huesped* pHuesped){
    pHuesped->setPuntaje((pHuesped->getPuntaje() + this->calificacion) /2);
    cout << "\nPuntaje actualizado!\n";
}

void Evaluacion::actualizarPuntajeP(Propietario* pPropietario){
    pPropietario->setPuntaje((pPropietario->getPuntaje() + this->calificacion) /2);
    cout << "\nPuntaje actualizado!\n";
}