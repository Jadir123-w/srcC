#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double montoDonacion, centroSalud, comedorNinos, inversionBolsa;

    cout << "Ingrese el monto de la donación: ";
    cin >> montoDonacion;

    if (montoDonacion >= 10000) {
        centroSalud = montoDonacion * 0.30;
        comedorNinos = montoDonacion * 0.50;
    } else {
        centroSalud = montoDonacion * 0.25; 
        comedorNinos = montoDonacion * 0.60; 
    }

    inversionBolsa = montoDonacion - (centroSalud + comedorNinos);

    cout << fixed;
    cout << "Distribución de la donación:" << endl;
    cout << "Centro de Salud: S/ " << centroSalud << endl;
    cout << "Comedor de Niños: S/ " << comedorNinos << endl;
    cout << "Inversión en Bolsa: S/ " << inversionBolsa << endl;

    return 0;
}
