#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

class Factura {
private:
    int idFactura;
    int idCliente;
    string fechaFactura;
    double totalFactura;
    vector<pair<int, int>> productosVendidos; // idProducto y cantidad

public:
    // Constructor
    Factura(int id = 0, int cliente = 0, string fecha = "", double total = 0.0);

    // Getters y Setters
    int getIdFactura() const;
    void setIdFactura(int id);

    int getIdCliente() const;
    void setIdCliente(int cliente);

    string getFechaFactura() const;
    void setFechaFactura(string fecha);

    double getTotalFactura() const;
    void setTotalFactura(double total);

    vector<pair<int, int>> getProductosVendidos() const;
    void agregarProducto(int idProducto, int cantidad);

    // Métodos adicionales
    void mostrarFactura() const;
};

#endif
