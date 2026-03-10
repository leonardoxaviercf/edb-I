#include <iostream>
#include <Windows.h>
using namespace std;

int somaCauda(int n, int acumulador = 0) {
    if (n == 0) {
        return acumulador;
    }

    return somaCauda(n - 1, acumulador + n);
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;

    cout << "A soma recursiva de 1 até "<< a << " é " << somaCauda(a) << endl; 

    return 0;
}