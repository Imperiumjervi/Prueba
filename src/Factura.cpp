#include "Factura.h"
#include <iostream>
using namespace std;

// Constructor
Factura::Factura(int id, int cliente, string fecha, double total)
    : idFactura(id), idCliente(cliente), fechaFactura(fecha), totalFactura(total) {}

// Getters y Setters
int Factura::getIdFactura() const { return idFactura; }
void Factura::setIdFactura(int id) { idFactura = id; }

int Factura::getIdCliente() const { return idCliente; }
void Factura::setIdCliente(int cliente) { idCliente = cliente; }

string Factura::getFechaFactura() const { return fechaFactura; }
void Factura::setFechaFactura(string fecha) { fechaFactura = fecha; }

double Factura::getTotalFactura() const { return totalFactura; }
void Factura::setTotalFactura(double total) { totalFactura = total; }

vector<pair<int, int>> Factura::getProductosVendidos() const { return productosVendidos; }
void Factura::agregarProducto(int idProducto, int cantidad) {
    productosVendidos.push_back({idProducto, cantidad});
}

// Métodos adicionales
void Factura::mostrarFactura() const {
    cout << "ID Factura: " << idFactura << endl;
    cout << "ID Cliente: " << idCliente << endl;
    cout << "Fecha de Factura: " << fechaFactura << endl;
    cout << "Total Factura: " << totalFactura << endl;
    cout << "Productos Vendidos: " << endl;
    for (const auto& producto : productosVendidos) {
        cout << "  ID Producto: " << producto.first << ", Cantidad: " << producto.second << endl;
    }
}
