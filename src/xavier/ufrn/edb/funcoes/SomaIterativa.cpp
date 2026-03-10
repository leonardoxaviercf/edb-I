#include <iostream>
#include <Windows.h>
using namespace std;

int somaIterativa(int n) {
    int acumulador = 0;
    while (n > 0) {
        acumulador += n;
        n -= 1;
    }
    return acumulador;
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;

    cout << "A soma de 1 até " << a << " é " << somaIterativa(a) << endl; 

    return 0;
}