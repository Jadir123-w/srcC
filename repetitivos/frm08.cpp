#include <iostream>
using namespace std;

int main() {
    int base, exponente, resultado = 1;
    cout << "Base :";
    cin >> base;
    cout << "Exponente :";
    cin >> exponente;

    for( int i = 0 ; i < exponente; i++){
        resultado *= base;
    }
    cout<<"Resultado :"<<resultado<<endl;
    return 0;
}
