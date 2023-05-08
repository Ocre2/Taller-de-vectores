#include <iostream>
using namespace std;

int main() {
    int num_empleados;
    cout << "Introduzca el número de empleados: ";
    cin >> num_empleados;

    int horas_trabajadas[num_empleados];
    int total_horas = 0;

    for (int i = 0; i < num_empleados; i++) {
        cout << "Introduzca las horas trabajadas por el empleado " << i+1 << ": ";
        cin >> horas_trabajadas[i];
        total_horas += horas_trabajadas[i];
    }

    double promedio_horas = (double)total_horas / num_empleados;

    cout << "El total de horas trabajadas es: " << total_horas << endl;
    cout << "El promedio de horas trabajadas por empleado es: " << promedio_horas << endl;

    return 0;
}
