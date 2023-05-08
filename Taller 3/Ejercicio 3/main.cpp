#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> productos;
    vector<double> precios;
    int opcion;

    do {
        cout << "MENU:" << endl;
        cout << "1. Registrar un producto y su precio" << endl;
        cout << "2. Buscar el precio de un producto" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:{
                string producto;
                double precio;
                cout << "Ingrese el nombre del producto: ";
                cin >> producto;
                cout << "Ingrese el precio del producto: ";
                cin >> precio;
                productos.push_back(producto);
                precios.push_back(precio);
                break;
            }

            case 2:{
                if (productos.size() == 0) {
                    cout << "No hay productos registrados" << endl;
                } else {
                    string producto_buscar;
                    cout << "Ingrese el nombre del producto a buscar: ";
                    cin >> producto_buscar;
                    bool encontrado = false;
                    for (int i = 0; i < productos.size(); i++) {
                        if (productos[i] == producto_buscar) {
                            cout << "El precio de " << producto_buscar << " es: " << precios[i] << endl;
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        cout << "No se encontró el producto: " << producto_buscar << endl;
                    }

                    break;

                }
            }
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;

        }

    }while (opcion != 3);
    return 0;
}