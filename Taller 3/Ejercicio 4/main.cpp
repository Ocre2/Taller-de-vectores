#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Num_Empleados;
    vector<float> Salarios;
    vector<string> Posiciones;

    int Empleados;
    cout << "Digite el número de empleados" << endl;
    cin >> Empleados;

    for (int i = 0; i < Empleados; ++i){

        float Salario;
        string Posicion;

        cout << "Digite la posición del empleado " << i+1 << ":" << endl;
        cin >> Posicion;
        cout << "Digite el salario del empleado " << i+1 << ":" << endl;
        cin >> Salario;
        Posiciones.push_back(Posicion);
        Salarios.push_back(Salario);

    }
    int opcion;
    do {
        cout << "1. Si desea ver los empleados y sus salarios" << endl;
        cout << "2. Para salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1 :
                cout << "Los cargos y empleados son : " << endl;
                for (int i = 0; i < Empleados ; ++i) {
                    cout << "Empleado " << i+1 << " : " << Posiciones[i]<< " - $" << Salarios[i] << endl;
                }


        }

    } while (opcion != 2);

    return 0;
}
