#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double ingresoMensual, costoCasa, cuotaInicial, cuotaMensual;

    cout << "Ingrese el ingreso mensual: ";
    cin >> ingresoMensual;
    cout << "Ingrese el costo de la casa: ";
    cin >> costoCasa;

    if (ingresoMensual < 1250) {
        cuotaInicial = costoCasa * 0.15; 
        cuotaMensual = (costoCasa - cuotaInicial) / 120;
    } else {
        cuotaInicial = costoCasa * 0.30; 
        cuotaMensual = (costoCasa - cuotaInicial) / 75; 
    }

    cout << fixed;
    cout << "Cuota Inicial: S/ " << cuotaInicial << endl;
    cout << "Cuota Mensual: S/ " << cuotaMensual << endl;

    return 0;
}
