#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cantidad;
    double precioUni, Desc, impCompra, tPagar;

    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    if (cantidad >= 1 && cantidad <= 25) {
        precioUni = 27.0;
    } else if (cantidad >= 26 && cantidad <= 50) {
        precioUni = 25.0;
    } else {
        precioUni = 23.0;
    }

    impCompra = cantidad * precioUni;

    if (cantidad > 50) {
        Desc = impCompra * 0.15;
    } else {
        Desc = impCompra * 0.05;
    }

    tPagar = impCompra - Desc;

    cout << fixed << setprecision(2);
    cout << "Importe de compra: " << impCompra << endl;
    cout << "Descuento: " << Desc << endl;
    cout << "Total a pagar: " << tPagar << endl;

    return 0;
}
