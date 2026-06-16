#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<string> usuarios;
    string usuario;

    for (int i=0; i<10; i++) {
        cout << "Digite seu login:" << endl;
        cin >> usuario;

        usuarios.insert(usuario);
    }

    for (string user : usuarios) {
        cout << user << endl;
    }

    return 0;
}