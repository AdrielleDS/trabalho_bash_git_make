echo "--- Testando o programa matriz.cpp ---"
echo ""

# Compila o programa 'matriz'.
make matriz || { echo "Erro ao compilar matriz.cpp. Verifique seu Makefile e código."; exit 1; }

echo "--- Teste de Soma de Matrizes (2x2) ---"
echo "Matriz 1:"
echo "1 2"
echo "3 4"
echo "Matriz 2:"
echo "5 6"
echo "7 8"
echo "Esperado Soma:"
echo "6 8"
echo "10 12"
# Entrada:
# 1 (opção de soma)
# 2 (linhas M1)
# 2 (colunas M1)
# 1 (elemento [0][0] M1)
# ...
# 2 (linhas M2)
# 2 (colunas M2)
# 5 (elemento [0][0] M2)
# ...
# 4 (sair)
./matriz <<< $'1\n2\n2\n1\n2\n3\n4\n2\n2\n5\n6\n7\n8\n4'
echo ""

echo "--- Teste de Multiplicação de Matrizes (2x2 * 2x1) ---"
echo "Matriz 1 (2x2):"
echo "1 2"
echo "3 4"
echo "Matriz 2 (2x1):"
echo "5"
echo "6"
echo "Esperado Multiplicação:"
echo "17" # (1*5 + 2*6) = 5 + 12 = 17
echo "39" # (3*5 + 4*6) = 15 + 24 = 39

./matriz <<< $'3\n2\n2\n1\n2\n3\n4\n2\n1\n5\n6\n4'
echo ""

echo "--- Testes do matriz.cpp concluídos ---"
