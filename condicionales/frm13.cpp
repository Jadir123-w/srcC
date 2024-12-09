#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string numero;
    string resultado;

    cout << "Ingrese un número de 3 cifras: ";
    cin >> numero;

    int c1 = numero[0] - '0';
    int c2 = numero[1] - '0';
    int c3 = numero[2] - '0';

    if (c1 + 1 == c2 && c2 + 1 == c3) {
        resultado = "Las cifras están en orden ascendente.";
    } else if (c1 - 1 == c2 && c2 - 1 == c3) {
        resultado = "Las cifras están en orden descendente.";
    } else {
        resultado = "Las cifras no están en ningún orden.";
    }

    cout << resultado << endl;

    return 0;
}
