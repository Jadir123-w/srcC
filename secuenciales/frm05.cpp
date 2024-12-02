#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int gigabytes, megabytes, kilobytes, bytes;

    cout << "Ingrese la cantidad en gigabytes: ";
    cin >> gigabytes;

    megabytes = gigabytes * 1024;
    kilobytes = megabytes * 1024;
    bytes = kilobytes * 1024;

    cout << "Gigabytes: " << gigabytes << endl;
    cout << "Megabytes: " << megabytes << endl;
    cout << "Kilobytes: " << kilobytes << endl;
    cout << "Bytes: " << bytes << endl;

    return 0;
}
