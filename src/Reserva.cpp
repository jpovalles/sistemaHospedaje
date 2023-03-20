//
// Created by jpova on 19/03/2023.
//

#include "Reserva.h"

Reserva::Reserva(string fechaInicio,string fechaFin, Propietario* pPropietario, huesped* pHuesped): fechaInicio(fechaInicio), fechaFin(fechaFin), pPropietario(pPropietario), pHuesped(pHuesped){}



/*
void Reserva::hacerReserva(app* pApp){
    int llaveA, llaveB;
    string fechaInicio, fechaFin;
    cout<<"Quién eres? (ID):"<<endl;
    pApp->mostrarHuespedes();
    cin>>llaveA;
    huesped* huespedTemp = pApp->getMapaH()[llaveA];
    cout<<"Fecha inicial de la reserva: "<<endl;
    cin>>fechaInicio;
    cout<<"Fecha Final de la reserva: "<<endl;
    cin>>fechaFin;
    cout<<"Donde te gustaria hospedarte: "<<endl;
    pApp->mostrarPropietarios();
    Propietario* propTemp = pApp->getMapaProp()[llaveB];
}*/

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