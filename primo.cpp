#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    if (numero <= 1) {
        std::cout << "Nao e primo" << std::endl;
        return 0;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            std::cout << "Nao e primo" << std::endl;
            return 0;
        }
    }

    std::cout << "Primo" << std::endl;
    return 0;
}
