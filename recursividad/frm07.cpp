#include <iostream>
#include <cmath>
#include <string>

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

    if (cin.fail() || exponente < 0) {
        cout << "Por favor, ingrese valores válidos (exponente no negativo)." << endl;
    } else {
        int resultado = calcularPotencia(base, exponente);
        cout << "Resultado: " << resultado << endl;
    }

    return 0;
}
