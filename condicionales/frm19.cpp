#include <iostream>
#include <string>

using namespace std;

int main() {
    string sexo;
    int edad;
    string cate;

    cout << "Ingrese el sexo (M o F): ";
    cin >> sexo;

    cout << "Ingrese la edad: ";
    cin >> edad;

    if (sexo == "F") {
        if (edad < 23) {
            cate = "FA";
        } else {
            cate = "FB";
        }
    } else if (sexo == "M") {
        if (edad < 25) {
            cate = "MA";
        } else {
            cate = "MB";
        }
    } else {
        cate = "No válido, solo F o M.";
    }

    cout << "Categoría: " << cate << endl;

    return 0;
}
