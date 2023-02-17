#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento (" << i+1 << ", " << j+1 << "): ";
            cin >> matriz[i][j];
        }
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *( *(matriz+i) + i );
    }

    cout << "La suma de los elementos de la diagonal principal es: " << suma << endl;

    return 0;
}
