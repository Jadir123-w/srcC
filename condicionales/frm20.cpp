#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    string resul;

    cout << "Ingrese el número A: ";
    cin >> a;

    cout << "Ingrese el número B: ";
    cin >> b;

    cout << "Ingrese el número C: ";
    cin >> c;

    if (a < b && b < c) {
        resul = "Ascendente";
    } else if (a > b && b > c) {
        resul = "Descendente";
    } else {
        resul = "Desordenado";
    }

    cout << "Resultado: " << resul << endl;

    return 0;
}
