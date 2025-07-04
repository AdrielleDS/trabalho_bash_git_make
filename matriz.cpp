#include <iostream>
#include <vector>
using namespace std;

// Função para imprimir uma matriz
void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            cout << elemento << "\t";
        }
        cout << endl;
    }
}

// Função para ler uma matriz
void lerMatriz(vector<vector<int>>& matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Função para somar duas matrizes
vector<vector<int>> somarMatrizes(const vector<vector<int>>& m1,
                                            const vector<vector<int>>& m2,
                                            int linhas, int colunas) {
    vector<vector<int>> resultado(linhas, vector<int>(colunas));
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return resultado;
}

// Função para subtrair duas matrizes
vector<vector<int>> subtrairMatrizes(const vector<vector<int>>& m1,
                                               const vector<vector<int>>& m2,
                                               int linhas, int colunas) {
    vector<vector<int>> resultado(linhas, vector<int>(colunas));
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = m1[i][j] - m2[i][j];
        }
    }
    return resultado;
}

// Função para multiplicar duas matrizes
vector<vector<int>> multiplicarMatrizes(const vector<vector<int>>& m1,
                                                 const vector<vector<int>>& m2,
                                                 int linhas1, int colunas1, int colunas2) {
    vector<vector<int>> resultado(linhas1, vector<int>(colunas2, 0));
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

    cout << "Bem-vindo a Calculadora de Matrizes!" << endl;

    do {
        cout << "\nSelecione a operacao:" <<endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: ";
        cin >> escolha;

        if (escolha == 0) {
            cout << "Saindo..." << endl;
            break;
        }

        cout << "\n--- Matriz 1 ---" << endl;
        cout << "Digite o numero de linhas da Matriz 1: ";
        cin >> linhas1;
        cout << "Digite o numero de colunas da Matriz 1: ";
        cin >> colunas1;
        vector<vector<int>> matriz1(linhas1, vector<int>(colunas1));
        lerMatriz(matriz1, linhas1, colunas1);

        cout << "\n--- Matriz 2 ---" << endl;
        cout << "Digite o numero de linhas da Matriz 2: ";
        cin >> linhas2;
        cout << "Digite o numero de colunas da Matriz 2: ";
        cin >> colunas2;
        vector<vector<int>> matriz2(linhas2, vector<int>(colunas2));
        lerMatriz(matriz2, linhas2, colunas2);

        vector<vector<int>> resultado;

        switch (escolha) {
            case 1: // Soma
                if (linhas1 == linhas2 && colunas1 == colunas2) {
                    resultado = somarMatrizes(matriz1, matriz2, linhas1, colunas1);
                    cout << "\nResultado da Soma:" << endl;
                    imprimirMatriz(resultado);
                } else {
                    cout << "Erro: Para soma, as matrizes devem ter as mesmas dimensoes." << endl;
                }
                break;
            case 2: // Subtracao
                if (linhas1 == linhas2 && colunas1 == colunas2) {
                    resultado = subtrairMatrizes(matriz1, matriz2, linhas1, colunas1);
                    cout << "\nResultado da Subtracao:" << endl;
                    imprimirMatriz(resultado);
                } else {
                    cout << "Erro: Para subtracao, as matrizes devem ter as mesmas dimensoes." << endl;
                }
                break;
            case 3: // Multiplicacao
                if (colunas1 == linhas2) {
                    resultado = multiplicarMatrizes(matriz1, matriz2, linhas1, colunas1, colunas2);
                    cout << "\nResultado da Multiplicacao:" << endl;
                    imprimirMatriz(resultado);
                } else {
                    cout << "Erro: Para multiplicacao, o numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz." << std::endl;
                }
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (escolha != 0);

    return 0;
}
