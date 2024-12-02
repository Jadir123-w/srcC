#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double altura, base, area, perimetro;

    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;

    area = altura * base;
    perimetro = 2 * (base + altura);

    cout << fixed << setprecision(2);
    cout << "Área del rectángulo: " << area << endl;
    cout << "Perímetro del rectángulo: " << perimetro << endl;

    return 0;
}
