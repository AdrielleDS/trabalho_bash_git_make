#include <iostream>
#include <vector>
#include <limits> // Para numeric_limits

int main() {
    int tamanho;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;

    if (tamanho <= 0) {
        std::cout << "O tamanho do vetor deve ser positivo." << std::endl;
        return 1;
    }

    std::vector<int> vetor(tamanho);
    std::cout << "Digite os " << tamanho << " elementos do vetor:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    int maior_valor = std::numeric_limits<int>::min(); // Inicializa com o menor valor possível

    for (int valor : vetor) {
        if (valor > maior_valor) {
            maior_valor = valor;
        }
    }

    std::cout << "O maior valor do vetor e: " << maior_valor << std::endl;
    return 0;
}
