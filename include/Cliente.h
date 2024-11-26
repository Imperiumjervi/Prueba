#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    int idCliente;
    string nombre;
    string fechaNacimiento;

public:
    // Constructor
    Cliente(int id = 0, string nombre = "", string fecha = "");

    // Getters y Setters
    int getIdCliente() const;
    void setIdCliente(int id);

    string getNombre() const;
    void setNombre(string nombre);

    string getFechaNacimiento() const;
    void setFechaNacimiento(string fecha);

    // Métodos adicionales
    void mostrarInformacion() const;

    void menuClientes();
};

#endif
