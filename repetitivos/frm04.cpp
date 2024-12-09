#include <iostream>
using namespace std;

int main() {
    int numero, cantidad;

    cout << "Ingrese un número (n): ";
    cin >> numero;
    cout << "Ingrese la cantidad de múltiplos a calcular (m): ";
    cin >> cantidad;

    cout << "Los primeros " << cantidad << " múltiplos de " << numero << " son:\n";
    for (int i = 1; i <= cantidad; i++) {
        cout << (numero * i) << " ";
    }
    cout << endl;

    return 0;
}
