#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double total, prestamo, interes, tPrestamoInt, pPropio;
    double porPrestamo;

    cout << "Ingrese el monto total de compra ($): ";
    cin >> total;

    porPrestamo = (total > 5000) ? 0.30 : 0.20;

    prestamo = total * porPrestamo;
    interes = prestamo * 0.10;
    tPrestamoInt = prestamo + interes;

    pPropio = total - prestamo;
    
    cout << "Pago propio: $ " << pPropio << endl;
    cout << "Préstamo con interés: $ " << tPrestamoInt << endl;

    return 0;
}
