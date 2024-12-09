#include <iostream>
using namespace std;

int calcularPotencia(int base, int exponente) {
    if (exponente == 0) return 1;
    return base * calcularPotencia(base, exponente - 1);
}

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "Por favor, ingrese un exponente no negativo." << endl;
    } else {
        cout << "La potencia de " << base << " elevado a " << exponente 
             << " es: " << calcularPotencia(base, exponente) << endl;
    }
    return 0;
}
