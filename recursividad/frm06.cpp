#include <iostream>
using namespace std;

int calcularFibonacci(int n) {
    if (n <= 1) return n;
    return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
}

int main() {
    int numero;
    cout << "Ingrese el número de términos de la secuencia Fibonacci: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un número mayor a 0." << endl;
    } else {
        cout << "Secuencia Fibonacci:" << endl;
        for (int i = 0; i < numero; i++) {
            cout << calcularFibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
