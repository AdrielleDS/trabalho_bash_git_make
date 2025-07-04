echo "--- Testando o programa vetor.cpp ---"
echo ""

# Compila o programa 'vetor'.
make vetor || { echo "Erro ao compilar vetor.cpp. Verifique seu Makefile e código."; exit 1; }

echo "Executando 'vetor' com entrada: 3 elementos (10 5 20) (esperado: 20)"
# A entrada para o programa 'vetor' é:
# 3 (tamanho do vetor)
# 10 (primeiro elemento)
# 5 (segundo elemento)
# 20 (terceiro elemento)
./vetor <<< $'3\n10\n5\n20' # O '$' antes da string permite o uso de '\n' para quebras de linha.
echo ""

echo "Executando 'vetor' com entrada: 5 elementos (1 2 3 4 5) (esperado: 5)"
./vetor <<< $'5\n1\n2\n3\n4\n5'
echo ""

echo "Executando 'vetor' com entrada: 1 elemento (42) (esperado: 42)"
./vetor <<< $'1\n42'
echo ""

echo "Executando 'vetor' com entrada: 4 elementos (-1 -5 -2 -10) (esperado: -1)"
./vetor <<< $'4\n-1\n-5\n-2\n-10'
echo ""

echo "--- Testes do vetor.cpp concluídos ---"
