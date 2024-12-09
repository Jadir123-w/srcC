#include <iostream>
#include <limits>

using namespace std;

string generarRectanguloAsteriscos(int n) {
    string resultado = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            resultado += "*";
        }
        resultado += "\n";
    }
    return resultado;
}

int main() {
    int n;

    cout << "Ingrese la altura (n): ";
    cin >> n;


    if (cin.fail() || n < 4) {
        cout << "Por favor, ingrese un número válido mayor o igual a 4." << endl;
        return 1;
    }

    string resultado = generarRectanguloAsteriscos(n);
    cout << resultado;

    return 0;
}
