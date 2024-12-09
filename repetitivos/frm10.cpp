#include <iostream>
using namespace std;

int main() {
    int cantidad = 0;
    string resultado = "";

    for (int num = 1000; num <= 9999; num++) {
        int dig1 = num / 1000;
        int dig2 = (num / 100) % 10;
        int dig3 = (num / 10) % 10;
        int dig4 = num % 10;

        int sumaPares = 0, sumaImpares = 0;

        if (dig1 % 2 == 0) sumaPares += dig1; else sumaImpares += dig1;
        if (dig2 % 2 == 0) sumaPares += dig2; else sumaImpares += dig2;
        if (dig3 % 2 == 0) sumaPares += dig3; else sumaImpares += dig3;
        if (dig4 % 2 == 0) sumaPares += dig4; else sumaImpares += dig4;

        if (sumaPares == sumaImpares) {
            resultado += to_string(num) + "\n";
            cantidad++;
        }
    }

    // Imprimir resultados
    if (cantidad > 0) {
        resultado += "\nCantidad de números encontrados: " + to_string(cantidad);
    } else {
        resultado += "\nNo se encontraron números que cumplan la condición: " + to_string(cantidad);
    }

    cout << resultado;

    return 0;
}
