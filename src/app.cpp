//
// Created by jpova on 19/03/2023.
//

#include "app.h"

void app:: agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, int puntaje, string clinica, string procedencia){
    huesped* pHuespedTemp = new huesped(id, nombre, sexo, fechaNacimiento, puntaje, clinica, procedencia);

    this->mapaHuespedes.insert(make_pair(id, pHuespedTemp));
}

void app::mostrarHuespedes() {
    unordered_map<int,huesped*>::iterator mapa;
    cout<<"Los huespedes son: "<< endl;
    int cont = 1;
    for(mapa = this->mapaHuespedes.begin(); mapa != this->mapaHuespedes.end(); ++mapa){
        huesped* pHuespedTemp = mapa->second;
        cout<<cont<<". ID: "<<pHuespedTemp->getId()<<" Nombre: "<<pHuespedTemp->getNombre()<<" Puntaje: "<<pHuespedTemp->getPuntaje()<<"\n"<< endl;
        cont++;
    }
}

void app::inscribirPropietario(int id, string nombre, string sexo, string nacimiento, int puntaje, int disponibilidad, string direccion, int camas, int bebe, string descripcion){
    Propietario* pPropietarioTemp = new Propietario(id, nombre, sexo, nacimiento, puntaje, disponibilidad);

    pPropietarioTemp->agregarHogar(direccion, descripcion, camas, bebe);

    this->mapaPropietarios.insert(make_pair(id, pPropietarioTemp));
}

void app::mostrarHogares(){
    unordered_map<int,Propietario*>::iterator mapa;
    cout<<"Los hogares son: "<< endl;
    int cont=1;
    for(mapa = this->mapaPropietarios.begin(); mapa != this->mapaPropietarios.end(); ++mapa){
        Propietario* pPropietarioTemp = mapa->second;
        cout<<cont<<
        cont++;
    }
}
/*
void app::reservas(string fechaInicio, string fechaFin, Propietario* pPropietario, huesped* pHuesped){
    Reserva* reservaTemp = new Reserva(fechaInicio, fechaFin, pPropietario, pHuesped);
    this->listaReservas.insert(make_pair(pHuesped->getId(), reservaTemp));
}
*/
unordered_map<int, huesped*> app::getMapaH(){
    return mapaHuespedes;
}

unordered_map<int, Propietario*> app::getMapaProp(){
    return mapaPropietarios;
}