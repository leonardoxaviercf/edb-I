#include <iostream>
#include <Windows.h>
using namespace std;

int somaIterativa(int a, int b) {
    while (b > 0) {
        a += 1;
        b -= 1;
    }

    return a;
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;
    int b = 15;

    cout << "A soma de " << a << " e " << b << " é " << somaIterativa(a, b) << endl; 

    return 0;
}