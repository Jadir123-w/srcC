#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base, exponente, resultado = 1;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
