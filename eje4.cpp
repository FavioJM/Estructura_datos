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

    int max_num = lista[0];
    int min_num = lista[0];

    for (int i = 1; i < n; i++) {
        if (lista[i] > max_num) {
            max_num = lista[i];
        }
        if (lista[i] < min_num) {
            min_num = lista[i];
        }
    }

    cout << "El número más grande de la lista es: " << max_num << endl;
    cout << "El número más pequeño de la lista es: " << min_num << endl;

    return 0;
}
