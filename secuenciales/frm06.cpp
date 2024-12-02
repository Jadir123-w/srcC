#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double altura, radio, area, volumen;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    area = 2 * M_PI * radio * (radio + altura);
    volumen = M_PI * pow(radio, 2) * altura;

    cout << fixed << setprecision(2);
    cout << "Área del cilindro: " << area << endl;
    cout << "Volumen del cilindro: " << volumen << endl;

    return 0;
}
