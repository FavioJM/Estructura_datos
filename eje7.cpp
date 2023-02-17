#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // inicializar semilla aleatoria
    int numeroAleatorio = rand() % 100 + 1;

    int intento;
    cout << "Adivina el número entre 1 y 100: ";
    cin >> intento;

    while (intento != numeroAleatorio) {
        if (intento < numeroAleatorio) {
            cout << "El número es mayor. Intenta de nuevo: ";
        } else {
            cout << "El número es menor. Intenta de nuevo: ";
        }
        cin >> intento;
    }

    cout << "Has adivinado el número." << endl;

    return 0;
}
