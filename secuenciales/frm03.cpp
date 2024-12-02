#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double kilometros, pies, millas, metrosTotales, yardasTotales;

    cout << "Ingrese la cantidad en kilómetros: ";
    cin >> kilometros;
    cout << "Ingrese la cantidad en pies: ";
    cin >> pies;
    cout << "Ingrese la cantidad en millas: ";
    cin >> millas;

    double metrosDesdeKilometros = kilometros * 1000;
    double metrosDesdePies = pies / 3.2808;
    double metrosDesdeMillas = millas * 1609;

    metrosTotales = metrosDesdeKilometros + metrosDesdePies + metrosDesdeMillas;
    yardasTotales = metrosTotales / 0.9144;

    cout << fixed << setprecision(2);
    cout << "Metros totales: " << metrosTotales << endl;
    cout << "Yardas totales: " << yardasTotales << endl;

    return 0;
}
