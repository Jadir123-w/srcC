#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int docenas;
    double precioPorDocena = 100.0;
    double montoCompra, descuento, totalPagar;
    int lapiceros = 0;

    cout << "Ingrese la cantidad de docenas: ";
    cin >> docenas;


    montoCompra = docenas * precioPorDocena;

    if (docenas >= 6) {
        descuento = montoCompra * 0.15; 
    } else {
        descuento = montoCompra * 0.10; 
    }

    if (docenas >= 30) {
        lapiceros = (docenas / 3) * 2;
    }

    totalPagar = montoCompra - descuento;

    cout << fixed;
    cout << "Monto de la compra: S/ " << montoCompra << endl;
    cout << "Descuento: S/ " << descuento << endl;
    cout << "Total a pagar: S/ " << totalPagar << endl;
    cout << "Lapiceros de obsequio: " << lapiceros << endl;

    return 0;
}
