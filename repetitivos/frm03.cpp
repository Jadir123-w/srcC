#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero, cantidadDiv = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= abs(numero); i++) {
        if (numero % i == 0) {
            cantidadDiv++;
        }
    }

    cout << "Cantidad de divisores: " << cantidadDiv << endl;

    return 0;
}
