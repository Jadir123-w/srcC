#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    double a, b, c, discriminante, raiz1, raiz2;

    cout << "Ingrese el coeficiente A: ";
    cin >> a;

    cout << "Ingrese el coeficiente B: ";
    cin >> b;

    cout << "Ingrese el coeficiente C: ";
    cin >> c;

    discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante < 0) {
        cout << "No hay soluciones reales." << endl;
    } else {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raices: " << raiz1 << ", " << raiz2 << endl;
    }

    return 0;
}
