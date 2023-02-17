#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    int num_palabras = 0;
    bool es_palabra = false;

    for (char c : cadena) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (es_palabra) {
                num_palabras++;
                es_palabra = false;
            }
        } else {
            es_palabra = true;
        }
    }

    if (es_palabra) {
        num_palabras++;
    }

    cout << "El número de palabras en la cadena es: " << num_palabras << endl;

    return 0;
}
