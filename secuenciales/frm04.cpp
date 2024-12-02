#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double metros, pulgadas, pies;

    cout << "Ingrese la cantidad en metros: ";
    cin >> metros;

    pulgadas = metros * 2.54;
    pies = metros * 12;

    cout << fixed << setprecision(2);
    cout << "Metros: " << metros << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Pies: " << pies << endl;

    return 0;
}
