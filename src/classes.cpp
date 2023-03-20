//
// Created by jpova on 19/03/2023.
//
#include "app.h"
#include "huesped.h"
#include "Propietario.h"
#include "Hogar.h"
#include "Evaluacion.h"


#include <iostream>

void crearPropietario(app* pApp){
    int id;
    int puntaje = 0, disponibilidad = 1;
    string nombre, sexo, nacimiento;
    cout << "Ingrese su nombre completo:" << endl;
    cin >> nombre;
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

void crearHuesped(app* pApp){
    int id;
    int puntaje = 0;
    string nombre, sexo, nacimiento;
    cout << "Ingrese su nombre completo:" << endl;
    cin >> nombre;
    cout << "Ingrese su identificacion unica:" << endl;
    cin >> id;
    cout << "Ingrese su sexo (F o M)" << endl;
    cin >> sexo;
    cout << "Ingrese su fecha de nacimiento:" << endl;
    cin >> nacimiento;

    string clinica, procedencia;
    cout << "Ingrese su clinica:" << endl;
    cin >> clinica;
    cout << "Ingrese su lugar de procedencia:" << endl;
    cin >> procedencia;

    pApp->agregarHuesped(id, nombre, sexo, nacimiento, puntaje, clinica, procedencia);
}

void hacerReserva(app* pApp){
    int llaveA, llaveB;
    string fechaInicio, fechaFin;
    cout<<"Quién eres? (Escribe tu ID):"<<endl;
    pApp->mostrarHuespedes();
    cin>>llaveA;
    huesped* huespedTemp = pApp->getMapaH()[llaveA];

    cout<<"Fecha inicial de la reserva: "<<endl;
    cin>>fechaInicio;
    cout<<"Fecha Final de la reserva: "<<endl;
    cin>>fechaFin;

    cout<<"Donde te gustaria hospedarte: "<<endl;
    pApp->mostrarHogares();
    cin>>llaveB;
    Propietario* propTemp = pApp->getMapaProp()[llaveB];
    pApp->reservas(fechaInicio, fechaFin, propTemp, huespedTemp);
    pApp->getMapaReservas()[llaveA]->modificarDisp(pApp->getMapaReservas()[llaveA]->getPropietario(), 0);
}


// string fecha, int calificacion, string comentario, string origen, string destino
void evaluacion(huesped *huespedTemp, Propietario *propietarioTemp, string fechaReserva){
    string comentario, origen, destino;
    int calificacion;

    cout << "Sr " << huespedTemp->getNombre() << " valore el servicio del 1 al 5\n";
    cin >> calificacion;
    cout << "Muy bien! Agradeceriamos que nos deje un comentario\n";
    cin >> comentario;

    Evaluacion evHuesped(fechaReserva, calificacion, comentario, huespedTemp->getNombre(), propietarioTemp->getNombre());
    evHuesped.actualizarPuntajeP(propietarioTemp);
    // addEvaluacion();

    cout << "Sr " << propietarioTemp->getNombre() << " valore el huesped del 1 al 5\n";
    cin >> calificacion;
    cout << "Muy bien! Agradeceriamos que nos deje un comentario\n";
    cin >> comentario;

    Evaluacion evPropietario(fechaReserva, calificacion, comentario, propietarioTemp->getNombre(), huespedTemp->getNombre());
    evPropietario.actualizarPuntajeH(huespedTemp);
    // addEvaluacion();
}

void eliminarReserva(app* pApp){
    int llave;
    cout<<"Quien desea eliminar la reserva? (Escribe tu id): "<<endl;
    cin>>llave;

    string aux = pApp->getMapaReservas()[llave]->getFechaF();
    huesped *huespedTemp =  pApp->getMapaReservas()[llave]->getHuesped();
    Propietario *propietarioTemp = pApp->getMapaReservas()[llave]->getPropietario();

    pApp->getMapaReservas()[llave]->modificarDisp(pApp->getMapaReservas()[llave]->getPropietario(), 1);
    pApp->checkout(llave);

    evaluacion(huespedTemp, propietarioTemp, aux);
}

void mostrarMenu(app *pApp){
    int opcion = 0;
    do{
        std::cout << "Bienvenido al GlizzyHospedaje\n";
        cout << "¿Que desea hacer?\n";
        cout << "1. Crear propietario\n";
        cout << "2. Crear huesped\n";
        cout << "3. Realizar reserva\n";
        cout << "4. Hacer checkout\n";
        cout << "0. Salir\n";

        cin >> opcion;

        switch (opcion) {
            case 1:
                crearPropietario(pApp);
                break;
            case 2:
                crearHuesped(pApp);
                break;
            case 3:
                hacerReserva(pApp);
                break;
            case 4:
                eliminarReserva(pApp);
                break;
            default:
                break;
        }
    }while(opcion != 0);
}


int main() {
    app* pApp = new app();
    mostrarMenu(pApp);

    delete pApp;
    return 0;
}
