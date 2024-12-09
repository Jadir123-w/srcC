#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int edad1, edad2, edad3;
    int edadMayor, edadMenor;

    cout << "Digite la edad 1: ";
    cin >> edad1;

    cout << "Digite la edad 2: ";
    cin >> edad2;

    cout << "Digite la edad 3: ";
    cin >> edad3;
    
    edadMayor = max(edad1, max(edad2, edad3));
    edadMenor = min(edad1, min(edad2, edad3));

    cout << "Edad mayor: " << edadMayor << endl;
    cout << "Edad menor: " << edadMenor << endl;

    return 0;
}
