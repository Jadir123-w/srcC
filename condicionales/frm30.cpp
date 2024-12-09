#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    double cuota, totalPagar;
    int diaPago;

    cout << "Cuota Mensual ($): ";
    cin >> cuota;

    cout << "Día de Pago: ";
    cin >> diaPago;

    if (diaPago <= 10) {
        double descuento = max(5.0, cuota * 0.02);
        totalPagar = cuota - descuento;
    } else if (diaPago <= 20) {
        totalPagar = cuota;
    } else {
        double recargo = max(10.0, cuota * 0.03);
        totalPagar = cuota + recargo;
    }

    cout << "Total a Pagar: $ " << fixed << setprecision(2) << totalPagar << endl;

    return 0;
}
