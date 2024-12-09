#include <iostream>
using namespace std;

int calcularSumatoria(int numero) {
    if (numero == 0) return 0;
    return numero + calcularSumatoria(numero - 1);
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número no negativo." << endl;
    } else {
        cout << "La sumatoria de 1 a " << numero << " es: " 
             << calcularSumatoria(numero) << endl;
    }
    return 0;
}
