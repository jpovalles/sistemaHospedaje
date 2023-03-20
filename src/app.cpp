//
// Created by jpova on 19/03/2023.
//

#include "app.h"

void app:: agregarHuesped(int id, string nombre, string sexo, string fechaNacimiento, int puntaje, string clinica, string procedencia){
    huesped* pHuespedTemp = new huesped(id, nombre, sexo, fechaNacimiento, puntaje, clinica, procedencia);

    this->mapaHuespedes.insert(make_pair(id, pHuespedTemp));
}

void app::inscribirPropietario(int id, string nombre, string sexo, string nacimiento, int puntaje, int disponibilidad){
    Propietario* pPropietarioTemp = new Propietario(id, nombre, sexo, nacimiento, puntaje, disponibilidad);
    this->mapaPropietarios.insert(make_pair(id, pPropietarioTemp));
}

void app::mostrarPropietarios(){
    unordered_map<int,Propietario*>::iterator mapa;
    cout<<"Los propietarios son: "<< endl;
    int cont=1;
    for(mapa = this->mapaPropietarios.begin(); mapa != this->mapaPropietarios.end(); ++mapa){
        int llave =mapa->first;
        Propietario* pPropietarioTemp = mapa->second;
        cout<<cont<<". ID: "<<pPropietarioTemp->getId()<<" Nombre: "<<pPropietarioTemp->getNombre()<<" Puntaje: "<<pPropietarioTemp->getPuntaje()<<"\n"<< endl;
        cont++;
    }
}