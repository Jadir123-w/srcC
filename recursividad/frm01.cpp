#include <iostream>
using namespace std;

int calcularFactorial(int n) {
    if (n == 0) return 1;
    return n * calcularFactorial(n - 1);
}

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    if (n < 0) {
        cout << "Por favor, ingrese un número no negativo." << endl;
    } else {
        cout << "El factorial de " << n << " es: " << calcularFactorial(n) << endl;
    }
    return 0;
}
