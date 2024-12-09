#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    int centenas1, decenas1, unidades1;
    int centenas2, decenas2, unidades2;
    int nuevoNumero1, nuevoNumero2;

    cout << "Ingrese el primer numero (3 digitos): ";
    cin >> numero1;
    cout << "Ingrese el segundo numero (3 digitos): ";
    cin >> numero2;

    centenas1 = numero1 / 100;
    decenas1 = (numero1 / 10) % 10;
    unidades1 = numero1 % 10;

    centenas2 = numero2 / 100;
    decenas2 = (numero2 / 10) % 10;
    unidades2 = numero2 % 10;

    nuevoNumero1 = centenas2 * 100 + decenas1 * 10 + unidades2;
    nuevoNumero2 = centenas1 * 100 + decenas2 * 10 + unidades1;

    cout << "Nuevo numero 1: " << nuevoNumero1 << endl;
    cout << "Nuevo numero 2: " << nuevoNumero2 << endl;

    return 0;
}
