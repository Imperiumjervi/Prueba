#include "Producto.h"
#include <iostream>
using namespace std;

// Constructor
Producto::Producto(int id, string nombre, int cantidad, double precio, string fecha)
    : idProducto(id), nombre(nombre), cantidad(cantidad), precioVenta(precio), fechaFabricacion(fecha) {}

// Getters y Setters
int Producto::getIdProducto() const { return idProducto; }
void Producto::setIdProducto(int id) { idProducto = id; }

string Producto::getNombre() const { return nombre; }
void Producto::setNombre(string nombre) { this->nombre = nombre; }

int Producto::getCantidad() const { return cantidad; }
void Producto::setCantidad(int cantidad) { this->cantidad = cantidad; }

double Producto::getPrecioVenta() const { return precioVenta; }
void Producto::setPrecioVenta(double precio) { precioVenta = precio; }

string Producto::getFechaFabricacion() const { return fechaFabricacion; }
void Producto::setFechaFabricacion(string fecha) { fechaFabricacion = fecha; }

// Métodos adicionales
void Producto::mostrarInformacion() const {
    cout << "ID Producto: " << idProducto << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio Venta: " << precioVenta << endl;
    cout << "Fecha de Fabricacion: " << fechaFabricacion << endl;
}
