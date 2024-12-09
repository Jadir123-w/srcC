#include <iostream>
#include <limits>

using namespace std;

long calcularFactorial(int numero) {
    if (numero == 0 || numero == 1) return 1;
    return numero * calcularFactorial(numero - 1);
}

int main() {
    int numero;

    cout << "Ingrese un número para calcular su factorial: ";
    cin >> numero;

    if (cin.fail() || numero < 0) {
        cout << "Por favor, ingrese un número entero no negativo válido." << endl;
        return 1;
    }

    long resultado = calcularFactorial(numero);

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
