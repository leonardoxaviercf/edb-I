#include <iostream>
#include <Windows.h>
using namespace std;

int fatorialCauda(int a, int acumulador = 1) {
    if (a <= 1) {
        return acumulador;
    } 
    return fatorialCauda(a - 1, acumulador * a);
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;

    cout << "O fatorial de " << a << " é " << fatorialCauda(a) << endl; 

    return 0;
}