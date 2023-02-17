#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la lista: ";
    cin >> n;

    int lista[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> lista[i];
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (lista[i] > lista[j]) {
                int temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    cout << "La lista ordenada es: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }

    return 0;
}
