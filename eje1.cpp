#include <iostream>

using namespace std;

int main() {
    double base, altura;
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    double area = base * altura;
    double perimetro = 2 * (base + altura);

    cout << "El área del rectángulo es: " << area << endl;
    cout << "El perímetro del rectángulo es: " << perimetro << endl;

    return 0;
}
