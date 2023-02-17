#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante {
    string nombre;
    vector<int> calificaciones;
};

int main() {
    int n; // número de estudiantes
    cout << "Ingrese el número de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes(n);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del estudiante #" << i+1 << ": ";
        cin >> estudiantes[i].nombre;

        int m;
        cout << "Ingrese el número de calificaciones del estudiante #" << i+1 << ": ";
        cin >> m;

        estudiantes[i].calificaciones.resize(m);
        for (int j = 0; j < m; j++) {
            cout << "Ingrese la calificación #" << j+1 << " del estudiante #" << i+1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < estudiantes[i].calificaciones.size(); j++) {
            sum += estudiantes[i].calificaciones[j];
        }
        float promedio = static_cast<float>(sum) / estudiantes[i].calificaciones.size();
        cout << "El promedio de calificaciones para " << estudiantes[i].nombre << " es: " << promedio << endl;
    }

    return 0;
}
