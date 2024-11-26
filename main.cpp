#include <iostream>
#include <vector>
#include "Cliente.h" // Incluir el encabezado de Cliente
#include <algorithm> // Necesaria para remove_if
#include "Empleado.h"

using namespace std;

// Declaraci�n del vector global de clientes
vector<Cliente> clientes;

// Prototipo del men� de clientes
void menuClientes();

// Men� principal
int main() {
    int opcion;

    do {
        cout << "\n==== SISTEMA DE VENTAS ====\n";
        cout << "1. Gestionar Clientes\n";
        cout << "2. Gestionar Productos\n";
        cout << "3. Gestionar Empleados\n";
        cout << "4. Generar Facturas\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                menuClientes();
                break;
            case 2:
                //menuProductos();
                break;
            case 3:
                menuEmpleados(); // Llama al men� de empleados
                break;
            case 4:
                //menuFacturas();
                break;
            case 5:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
        }
    } while (opcion != 5);
}

    return 0;
}

// Implementaci�n del men� de clientes
void menuClientes() {
    int opcion;

    do {
        cout << "\n==== GESTION DE CLIENTES ====\n";
        cout << "1. Agregar Cliente\n";
        cout << "2. Listar Clientes\n";
        cout << "3. Editar Cliente\n";
        cout << "4. Eliminar Cliente\n";
        cout << "5. Volver al Menu Principal\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agregar cliente
                int id;
                string nombre, fecha;
                cout << "Ingrese ID del cliente: ";
                cin >> id;

                // Validar si el ID ya existe
                bool existe = false;
                for (const auto& cliente : clientes) {
                    if (cliente.getIdCliente() == id) {
                        existe = true;
                        break;
                    }
                }

                if (existe) {
                    cout << "Error: El cliente con ID " << id << " ya existe.\n";
                } else {
                    cout << "Ingrese nombre del cliente: ";
                    cin.ignore(); // Limpiar el buffer
                    getline(cin, nombre);
                    cout << "Ingrese fecha de nacimiento (dd/mm/aaaa): ";
                    getline(cin, fecha);
                    clientes.push_back(Cliente(id, nombre, fecha)); // Agregar al vector
                    cout << "Cliente agregado exitosamente.\n";
                }
                break;
            }
            case 2: {
                // Listar clientes
                cout << "\n=== LISTADO DE CLIENTES ===\n";
                for (const auto& cliente : clientes) {
                    cliente.mostrarInformacion();
                    cout << "-------------------------\n";
                }
                break;
            }
            case 3: {
                // Editar cliente
                int id;
                cout << "Ingrese ID del cliente a editar: ";
                cin >> id;

                bool encontrado = false;
                for (auto& cliente : clientes) {
                    if (cliente.getIdCliente() == id) {
                        encontrado = true;
                        string nuevoNombre, nuevaFecha;
                        cout << "Ingrese nuevo nombre: ";
                        cin.ignore();
                        getline(cin, nuevoNombre);
                        cout << "Ingrese nueva fecha de nacimiento (dd/mm/aaaa): ";
                        getline(cin, nuevaFecha);
                        cliente.setNombre(nuevoNombre);
                        cliente.setFechaNacimiento(nuevaFecha);
                        cout << "Cliente actualizado correctamente.\n";
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Error: Cliente con ID " << id << " no encontrado.\n";
                }
                break;
            }
            case 4: {
                // Eliminar cliente
                int id;
                cout << "Ingrese ID del cliente a eliminar: ";
                cin >> id;

                auto it = remove_if(clientes.begin(), clientes.end(),
                                    [id](const Cliente& cliente) { return cliente.getIdCliente() == id; });

                if (it != clientes.end()) {
                    clientes.erase(it, clientes.end());
                    cout << "Cliente eliminado correctamente.\n";
                } else {
                    cout << "Error: Cliente con ID " << id << " no encontrado.\n";
                }
                break;
            }
            case 5:
                cout << "Volviendo al menu principal...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
        }
    } while (opcion != 5);
}

void menuEmpleados() {
    int opcion;

    do {
        cout << "\n==== GESTION DE EMPLEADOS ====\n";
        cout << "1. Agregar Empleado\n";
        cout << "2. Listar Empleados\n";
        cout << "3. Editar Empleado\n";
        cout << "4. Eliminar Empleado\n";
        cout << "5. Volver al Menu Principal\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agregar empleado
                int id;
                string nombre, cargo;
                double salario;

                cout << "Ingrese ID del empleado: ";
                cin >> id;

                // Validar si el ID ya existe
                bool existe = false;
                for (const auto& empleado : empleados) {
                    if (empleado.getIdEmpleado() == id) {
                        existe = true;
                        break;
                    }
                }

                if (existe) {
                    cout << "Error: El empleado con ID " << id << " ya existe.\n";
                } else {
                    cout << "Ingrese nombre del empleado: ";
                    cin.ignore(); // Limpiar el buffer
                    getline(cin, nombre);
                    cout << "Ingrese cargo del empleado: ";
                    getline(cin, cargo);
                    cout << "Ingrese salario del empleado: ";
                    cin >> salario;
                    empleados.push_back(Empleado(id, nombre, cargo, salario)); // Agregar al vector
                    cout << "Empleado agregado exitosamente.\n";
                }
                break;
            }
            case 2: {
                // Listar empleados
                cout << "\n=== LISTADO DE EMPLEADOS ===\n";
                for (const auto& empleado : empleados) {
                    empleado.mostrarInformacion();
                    cout << "-------------------------\n";
                }
                break;
            }
            case 3: {
                // Editar empleado
                int id;
                cout << "Ingrese ID del empleado a editar: ";
                cin >> id;

                bool encontrado = false;
                for (auto& empleado : empleados) {
                    if (empleado.getIdEmpleado() == id) {
                        encontrado = true;
                        string nuevoNombre, nuevoCargo;
                        double nuevoSalario;

                        cout << "Ingrese nuevo nombre: ";
                        cin.ignore();
                        getline(cin, nuevoNombre);
                        cout << "Ingrese nuevo cargo: ";
                        getline(cin, nuevoCargo);
                        cout << "Ingrese nuevo salario: ";
                        cin >> nuevoSalario;

                        empleado.setNombre(nuevoNombre);
                        empleado.setCargo(nuevoCargo);
                        empleado.setSalario(nuevoSalario);
                        cout << "Empleado actualizado correctamente.\n";
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Error: Empleado con ID " << id << " no encontrado.\n";
                }
                break;
            }
            case 4: {
                // Eliminar empleado
                int id;
                cout << "Ingrese ID del empleado a eliminar: ";
                cin >> id;

                auto it = remove_if(empleados.begin(), empleados.end(),
                                    [id](const Empleado& empleado) { return empleado.getIdEmpleado() == id; });

                if (it != empleados.end()) {
                    empleados.erase(it, empleados.end());
                    cout << "Empleado eliminado correctamente.\n";
                } else {
                    cout << "Error: Empleado con ID " << id << " no encontrado.\n";
                }
                break;
            }
            case 5:
                cout << "Volviendo al menu principal...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
        }
    } while (opcion != 5);
}
