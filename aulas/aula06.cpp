#include <iostream>
#include <vector>
using namespace std;

int main() {
    int menor;
    vector<int> numeros = {5, 2, 7, 1, 8, 9, 6, 3, 4};

    for (int i = 0; i < numeros.size(); i++) {
        menor = numeros[i];

        for (int num : numeros) {
            if (num < menor) {
                menor = num;
            }
        }

        numeros.insert(numeros.begin(), i, menor);
    }

    for (int num : numeros) {
        cout << num << " ";
    }

    return 0;
}