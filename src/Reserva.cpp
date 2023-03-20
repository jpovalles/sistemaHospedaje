//
// Created by jpova on 19/03/2023.
//

#include "Reserva.h"

Reserva::Reserva(string fechaInicio,string fechaFin, Propietario* pPropietario, huesped* pHuesped): fechaInicio(fechaInicio), fechaFin(fechaFin), pPropietario(pPropietario), pHuesped(pHuesped){}

void Reserva::modificarDisp(Propietario* pPropietario, int disponibilidad){
    pPropietario->setDisponibilidad(disponibilidad);
}

string Reserva::getFechaI() {
    return fechaInicio;
}

string Reserva::getFechaF() {
    return fechaFin;
}

Propietario* Reserva::getPropietario(){
    return pPropietario;
}

huesped* Reserva::getHuesped(){
    return pHuesped;
}