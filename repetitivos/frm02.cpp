#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, n2, resultado = 0;

    cout << "Ingrese el número 1: ";
    cin >> n1;

    cout << "Ingrese el número 2: ";
    cin >> n2;

    int veces = abs(n2);

    for (int i = 0; i < veces; i++) {
        resultado += n1;
    }

    if ((n1 < 0 && n2 > 0) || (n1 > 0 && n2 < 0)) {
        resultado = -resultado;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
