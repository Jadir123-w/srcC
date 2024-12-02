#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double altura, radio, areaB, areaL, areaT;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    areaB = M_PI * pow(radio, 2);
    areaL = 2 * M_PI * radio * altura;
    areaT = 2 * areaB + areaL;

    cout << fixed << setprecision(2);
    cout << "Área Base: " << areaB << endl;
    cout << "Área Lateral: " << areaL << endl;
    cout << "Área Total: " << areaT << endl;

    return 0;
}
