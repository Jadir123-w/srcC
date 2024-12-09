#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cantidad, caramelo;
    double precioUni = 20.0, Desc, impCompra, tPagar;

    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    impCompra = cantidad * precioUni;

    if (impCompra > 700) {
        Desc = impCompra * 0.16;
    } else if (impCompra >= 501) {
        Desc = impCompra * 0.14;
    } else {
        Desc = impCompra * 0.12;
    }

    tPagar = impCompra - Desc;

    if (cantidad >= 1 && cantidad <= 50) {
        caramelo = 5;
    } else if (cantidad >= 51 && cantidad <= 100) {
        caramelo = 10;
    } else {
        caramelo = 15;
    }

    cout << fixed << setprecision(2);
    cout << "Importe de compra: " << impCompra << endl;
    cout << "Descuento: " << Desc << endl;
    cout << "Total a pagar: " << tPagar << endl;
    cout << "Caramelos recibidos: " << caramelo << endl;

    return 0;
}