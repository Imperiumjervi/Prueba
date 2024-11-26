#include "Empleado.h"
#include <iostream>
using namespace std;

// Constructor
Empleado::Empleado(int id, string nombre, string puesto)
    : idEmpleado(id), nombre(nombre), puesto(puesto) {}

// Getters y Setters
int Empleado::getIdEmpleado() const { return idEmpleado; }
void Empleado::setIdEmpleado(int id) { idEmpleado = id; }

string Empleado::getNombre() const { return nombre; }
void Empleado::setNombre(string nombre) { this->nombre = nombre; }

string Empleado::getPuesto() const { return puesto; }
void Empleado::setPuesto(string puesto) { this->puesto = puesto; }

// Métodos adicionales
void Empleado::mostrarInformacion() const {
    cout << "ID Empleado: " << idEmpleado << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Puesto: " << puesto << endl;
}
