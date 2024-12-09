#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double catetoA, catetoB, hipotenusa;

    cout << "Ingrese el valor del cateto A: ";
    cin >> catetoA;

    cout << "Ingrese el valor del cateto B: ";
    cin >> catetoB;

    hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

    cout << fixed << setprecision(2);
    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}
