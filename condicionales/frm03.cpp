#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    double Angulo;
    string clasi;

    cout << "Digite el Angulo (grados): ";
    cin >> Angulo;

    if (Angulo == 0) {
        clasi = "Nulo 0°";
    } else if (Angulo > 0 && Angulo < 90) {
        clasi = "Agudo 0° a 90°";
    } else if (Angulo == 90) {
        clasi = "Recto 90°";
    } else if (Angulo > 90 && Angulo < 180) {
        clasi = "Obtuso 90° a 180°";
    } else if (Angulo == 180) {
        clasi = "Llano 180°";
    } else if (Angulo > 180 && Angulo < 360) {
        clasi = "Cóncavo 180° a 360°";
    } else if (Angulo == 360) {
        clasi = "Completo 360°";
    } else {
        clasi = "No se puede clasificar mayor a 360°";
    }

    cout << "Tipo de ángulo: " << clasi << endl;

    return 0;
}
