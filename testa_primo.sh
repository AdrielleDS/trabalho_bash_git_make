echo "--- Testando o programa primo.cpp ---"
echo "" # Imprime uma linha em branco para melhor leitura.

make primo || { echo "Erro ao compilar primo.cpp. Verifique seu Makefile e código."; exit 1; }

echo "Executando 'primo' com entrada 7 (esperado: Primo)"
# 'echo 7' envia o número 7 para a entrada padrão do programa 'primo'.
# '|' (pipe) redireciona a saída de um comando para a entrada de outro.
./primo <<< 7 # '<<<' é um "here string", uma forma mais moderna de passar entrada para um comando.
echo ""

echo "Executando 'primo' com entrada 10 (esperado: Não é primo)"
./primo <<< 10
echo ""

echo "Executando 'primo' com entrada 2 (esperado: Primo)"
./primo <<< 2
echo ""

echo "Executando 'primo' com entrada 1 (esperado: Não é primo)"
./primo <<< 1
echo ""

echo "Executando 'primo' com entrada 0 (esperado: Não é primo)"
./primo <<< 0
echo ""

echo "--- Testes do primo.cpp concluídos ---"

