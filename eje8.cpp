#include <iostream>
using namespace std;

int main() {
    char operador;
    double num1, num2, resultado;

    cout << "Ingrese una operacion matematica (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: division por cero" << endl;
                return 0;
            }
            break;
        default:
            cout << "Operador invalido" << endl;
            return 0;
    }

    cout << "El resultado de la operacion es: " << resultado << endl;

    return 0;
}
