#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
private:
    int idProducto;
    string nombre;
    int cantidad;
    double precioVenta;
    string fechaFabricacion; // O fechaVencimiento, según elección

public:
    // Constructor
    Producto(int id = 0, string nombre = "", int cantidad = 0, double precio = 0.0, string fecha = "");

    // Getters y Setters
    int getIdProducto() const;
    void setIdProducto(int id);

    string getNombre() const;
    void setNombre(string nombre);

    int getCantidad() const;
    void setCantidad(int cantidad);

    double getPrecioVenta() const;
    void setPrecioVenta(double precio);

    string getFechaFabricacion() const;
    void setFechaFabricacion(string fecha);

    // Métodos adicionales
    void mostrarInformacion() const;
};

#endif
