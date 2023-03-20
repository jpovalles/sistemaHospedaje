//
// Created by jpova on 19/03/2023.
//

#include "app.h"

void app:: agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, float puntaje, string clinica, string procedencia){
    huesped* pHuespedTemp = new huesped(id, nombre, sexo, fechaNacimiento, puntaje, clinica, procedencia);

    this->mapaHuespedes.insert(make_pair(id, pHuespedTemp));
}

void app::mostrarHuespedes() {
    unordered_map<int,huesped*>::iterator mapa;
    cout<<" "<< endl;
    int cont = 1;
    for(mapa = this->mapaHuespedes.begin(); mapa != this->mapaHuespedes.end(); ++mapa){
        huesped* pHuespedTemp = mapa->second;
        cout<<cont<<". ID: "<<pHuespedTemp->getId()<<" | Nombre: "<<pHuespedTemp->getNombre()<<" | Puntaje: "<<pHuespedTemp->getPuntaje()<< endl;
        cont++;
    }
}

void app::inscribirPropietario(int id, string nombre, string sexo, string nacimiento, float puntaje, int disponibilidad, string direccion, int camas, int bebe, string descripcion){
    Propietario* pPropietarioTemp = new Propietario(id, nombre, sexo, nacimiento, puntaje, disponibilidad);

    pPropietarioTemp->agregarHogar(direccion, descripcion, camas, bebe);

    this->mapaPropietarios.insert(make_pair(id, pPropietarioTemp));
}

void app::mostrarHogares(){
    unordered_map<int,Propietario*>::iterator mapa;
    int cont=1;
    cout<<"Donde te gustaria hospedarte: (Escribe el ID del Propietario)"<<endl;
    cout<<"Los hogares disponibles son: "<< endl;
    for (mapa = this->mapaPropietarios.begin(); mapa != this->mapaPropietarios.end(); ++mapa) {
        Propietario *pPropietarioTemp = mapa->second;
        if (pPropietarioTemp->getDisponibilidad() == 1) {
            cout << cont << ". ID: " << pPropietarioTemp->getId() << " | Propietario: "
                 << pPropietarioTemp->getNombre() << " | Puntaje: " << pPropietarioTemp->getPuntaje();
            cout << " | Direccion: " << pPropietarioTemp->getHogar()->getDireccion() << " | Descripcion: "
                 << pPropietarioTemp->getHogar()->getDescripcion();
            cout << " | Numero de camas: " << pPropietarioTemp->getHogar()->getCamas();
            if (pPropietarioTemp->getHogar()->getBebes() == 1) { cout << " | Si se permiten bebes" << endl; }
            else { cout << " | No se permiten bebes" << endl; }
            cont++;
        }
    }
}

void app::reservas(string fechaInicio, string fechaFin, Propietario* pPropietario, huesped* pHuesped){
    Reserva* reservaTemp = new Reserva(fechaInicio, fechaFin, pPropietario, pHuesped);
    this->listaReservas.insert(make_pair(pHuesped->getId(), reservaTemp));
}

void app::checkout(int id){
    cout<<"El checkout de "<<listaReservas[id]->getHuesped()->getNombre()<<" se realizo exitosamente"<<endl;
    listaReservas.erase(id);
}

unordered_map<int, huesped*> app::getMapaH(){
    return mapaHuespedes;
}

unordered_map<int, Propietario*> app::getMapaProp(){
    return mapaPropietarios;
}

unordered_map<int, Reserva*> app::getMapaReservas(){
    return listaReservas;
}

void app::agregarEvaluacion(Evaluacion tempEvo){
    this->listaEvaluaciones.push_back(tempEvo);
    cout << "Su evaluacion fue registrada!\n"<<endl;
}