#include <iostream>
#include <vector>

// Função para imprimir uma matriz
void imprimirMatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            std::cout << elemento << "\t";
        }
        std::cout << std::endl;
    }
}

// Função para ler uma matriz
void lerMatriz(std::vector<std::vector<int>>& matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << "Elemento[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }
}

// Função para somar duas matrizes
std::vector<std::vector<int>> somarMatrizes(const std::vector<std::vector<int>>& m1,
                                            const std::vector<std::vector<int>>& m2,
                                            int linhas, int colunas) {
    std::vector<std::vector<int>> resultado(linhas, std::vector<int>(colunas));
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return resultado;
}

// Função para subtrair duas matrizes
std::vector<std::vector<int>> subtrairMatrizes(const std::vector<std::vector<int>>& m1,
                                               const std::vector<std::vector<int>>& m2,
                                               int linhas, int colunas) {
    std::vector<std::vector<int>> resultado(linhas, std::vector<int>(colunas));
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = m1[i][j] - m2[i][j];
        }
    }
    return resultado;
}

// Função para multiplicar duas matrizes
std::vector<std::vector<int>> multiplicarMatrizes(const std::vector<std::vector<int>>& m1,
                                                 const std::vector<std::vector<int>>& m2,
                                                 int linhas1, int colunas1, int colunas2) {
    std::vector<std::vector<int>> resultado(linhas1, std::vector<int>(colunas2, 0));
    for (int i = 0; i < linhas1; ++i) {
        for (int j = 0; j < colunas2; ++j) {
            for (int k = 0; k < colunas1; ++k) {
                resultado[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return resultado;
}

int main() {
    int linhas1, colunas1, linhas2, colunas2;
    int escolha;

    std::cout << "Bem-vindo a Calculadora de Matrizes!" << std::endl;

    do {
        std::cout << "\nSelecione a operacao:" << std::endl;
        std::cout << "1. Soma" << std::endl;
        std::cout << "2. Subtracao" << std::endl;
        std::cout << "3. Multiplicacao" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "Escolha: ";
        std::cin >> escolha;

        if (escolha == 0) {
            std::cout << "Saindo..." << std::endl;
            break;
        }

        std::cout << "\n--- Matriz 1 ---" << std::endl;
        std::cout << "Digite o numero de linhas da Matriz 1: ";
        std::cin >> linhas1;
        std::cout << "Digite o numero de colunas da Matriz 1: ";
        std::cin >> colunas1;
        std::vector<std::vector<int>> matriz1(linhas1, std::vector<int>(colunas1));
        lerMatriz(matriz1, linhas1, colunas1);

        std::cout << "\n--- Matriz 2 ---" << std::endl;
        std::cout << "Digite o numero de linhas da Matriz 2: ";
        std::cin >> linhas2;
        std::cout << "Digite o numero de colunas da Matriz 2: ";
        std::cin >> colunas2;
        std::vector<std::vector<int>> matriz2(linhas2, std::vector<int>(colunas2));
        lerMatriz(matriz2, linhas2, colunas2);

        std::vector<std::vector<int>> resultado;

        switch (escolha) {
            case 1: // Soma
                if (linhas1 == linhas2 && colunas1 == colunas2) {
                    resultado = somarMatrizes(matriz1, matriz2, linhas1, colunas1);
                    std::cout << "\nResultado da Soma:" << std::endl;
                    imprimirMatriz(resultado);
                } else {
                    std::cout << "Erro: Para soma, as matrizes devem ter as mesmas dimensoes." << std::endl;
                }
                break;
            case 2: // Subtracao
                if (linhas1 == linhas2 && colunas1 == colunas2) {
                    resultado = subtrairMatrizes(matriz1, matriz2, linhas1, colunas1);
                    std::cout << "\nResultado da Subtracao:" << std::endl;
                    imprimirMatriz(resultado);
                } else {
                    std::cout << "Erro: Para subtracao, as matrizes devem ter as mesmas dimensoes." << std::endl;
                }
                break;
            case 3: // Multiplicacao
                if (colunas1 == linhas2) {
                    resultado = multiplicarMatrizes(matriz1, matriz2, linhas1, colunas1, colunas2);
                    std::cout << "\nResultado da Multiplicacao:" << std::endl;
                    imprimirMatriz(resultado);
                } else {
                    std::cout << "Erro: Para multiplicacao, o numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz." << std::endl;
                }
                break;
            default:
                std::cout << "Opcao invalida. Tente novamente." << std::endl;
                break;
        }
    } while (escolha != 0);

    return 0;
}
