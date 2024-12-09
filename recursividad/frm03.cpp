#include <iostream>
using namespace std;

int calcularSumatoria(int n) {
    if (n == 0) return 0;
    return n + calcularSumatoria(n - 1);
}

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    if (n < 0) {
        cout << "Por favor, ingrese un número no negativo." << endl;
    } else {
        cout << "La sumatoria de los números hasta " << n << " es: " << calcularSumatoria(n) << endl;
    }
    return 0;
}
