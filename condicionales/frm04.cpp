#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double p1, p2, p3, promedio;

    cout << "Ingrese la nota 1: ";
    cin >> p1;

    cout << "Ingrese la nota 2: ";
    cin >> p2;

    cout << "Ingrese la nota 3: ";
    cin >> p3;

    if (p3 >= 10) {
        p3 += 2;
    }

    promedio = (p1 + p2 + p3) / 3;

    cout << fixed << setprecision(2);
    cout << "Promedio Final: " << promedio << endl;

    return 0;
}
