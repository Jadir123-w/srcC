#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double pMensual = 20.0;
    const double pxExam = 5.0;
    int exAp;
    double totalP;

    cout << "Digite el número de exámenes aprobados: ";
    cin >> exAp;

    totalP = pMensual + (exAp * pxExam);

    cout << fixed << setprecision(2);
    cout << "Monto de propina: S/. " << totalP << endl;

    return 0;
}
