#include "Cliente.h"
#include <iostream>
using namespace std;

// Constructor
Cliente::Cliente(int id, string nombre, string fecha)
    : idCliente(id), nombre(nombre), fechaNacimiento(fecha) {}

// Getters y Setters
int Cliente::getIdCliente() const { return idCliente; }
void Cliente::setIdCliente(int id) { idCliente = id; }

string Cliente::getNombre() const { return nombre; }
void Cliente::setNombre(string nombre) { this->nombre = nombre; }

string Cliente::getFechaNacimiento() const { return fechaNacimiento; }
void Cliente::setFechaNacimiento(string fecha) { fechaNacimiento = fecha; }

// Métodos adicionales
void Cliente::mostrarInformacion() const {
    cout << "ID Cliente: " << idCliente << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
}
