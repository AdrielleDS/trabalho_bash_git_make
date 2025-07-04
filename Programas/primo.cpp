#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "Nao e primo" <<endl;
        return 0;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            
            cout << "Nao e primo" << endl;
            return 0;
        }
    }

    cout << "Primo" << endl;
    return 0;
}
