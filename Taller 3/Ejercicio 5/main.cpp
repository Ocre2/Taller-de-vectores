#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<double> Notas;
    int Estudiantes;
    float Promedio;

    cout << "Digite el número de estudiantes" << endl;
    cin >> Estudiantes;

    for (int i = 0; i < Estudiantes ; ++i) {
        double Nota;
        cout << "Ingrese la nota del estudiante " << i+1 << endl;
        cin >> Nota;
        Notas.push_back(Nota);
    }
    float Suma_Notas;
    for (int i = 0; i < Estudiantes; ++i) {
        Suma_Notas += Notas[i];
        
    }
    Promedio = Suma_Notas/Estudiantes;
    for (int i = 0; i < Estudiantes; i++) {
       
        cout << "La nota de cada estudiante es : " << endl;
        cout << "Nota del estudiante " << i+1 << " es : " << Notas[i] << endl;
    }

    cout << "El promedio total es : " << Promedio << endl;

    return 0;
}
