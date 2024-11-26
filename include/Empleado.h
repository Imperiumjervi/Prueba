#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
private:
    int idEmpleado;
    string nombre;
    string puesto;

public:
    // Constructor
    Empleado(int id = 0, string nombre = "", string puesto = "");

    // Getters y Setters
    int getIdEmpleado() const;
    void setIdEmpleado(int id);

    string getNombre() const;
    void setNombre(string nombre);

    string getPuesto() const;
    void setPuesto(string puesto);

    // Métodos adicionales
    void mostrarInformacion() const;
};

#endif
