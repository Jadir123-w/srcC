#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double metros, centimetros, pulgadas, pies, yardas;

    cout << "Ingrese la cantidad en metros: ";
    cin >> metros;

    centimetros = metros * 100;
    pulgadas = metros * 39.3701;
    pies = metros * 3.28084;
    yardas = metros * 1.09361;

    cout << fixed << setprecision(2);
    cout << "Centímetros: " << centimetros << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Pies: " << pies << endl;
    cout << "Yardas: " << yardas << endl;

    return 0;
}
