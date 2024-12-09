#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numTarjeta;
    double montoCompra, descuento, totalPagar;

    cout << "Ingrese el número de la tarjeta: ";
    cin >> numTarjeta;

    cout << "Ingrese el monto de la compra: ";
    cin >> montoCompra;

    if (numTarjeta % 2 == 0 && numTarjeta >= 100) {
        descuento = montoCompra * 0.15;
    } else {
        descuento = montoCompra * 0.05;
    }

    totalPagar = montoCompra - descuento;

    cout << fixed;
    cout << "Descuento aplicado: S/ " << descuento << endl;
    cout << "Total a pagar: S/ " << totalPagar << endl;

    return 0;
}
