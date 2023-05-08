#include <iostream>
using namespace std;

int main() {
    const int num_meses = 12;
    int ventas_mensuales[num_meses];
    int ventas_totales = 0;

    for (int i = 0; i < num_meses; i++) {
        cout << "Ingrese las ventas del mes " << i+1 << ": ";
        cin >> ventas_mensuales[i];
        ventas_totales += ventas_mensuales[i];
    }

    cout << "Las ventas totales del año son: " << ventas_totales << endl;

    return 0;
}

