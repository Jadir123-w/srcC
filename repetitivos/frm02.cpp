#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int multiplicando, multiplicador;

    cout<<"Multipicando : "; cin>>multiplicando;
    cout<<"Multipicador : "; cin>>multiplicador;
    for(int n = multiplicando; multiplicador-- > 1; multiplicando += n);
    cout<<"Producto :"<<multiplicando<<endl;
    return 0;
}