#!/bin/bash
# testa_primo.sh
# Este script Bash testa o programa 'primo' com diferentes entradas.

# O '#!' (shebang) no início indica qual interpretador deve ser usado para executar o script.
# Neste caso, é o '/bin/bash'.

echo "--- Testando o programa primo.cpp ---"
echo "" # Imprime uma linha em branco para melhor leitura.

# Primeiro, vamos garantir que o programa 'primo' esteja compilado.
# Usamos 'make primo' para compilar apenas o programa primo.
# '|| { echo "Erro ao compilar primo.cpp. Verifique seu Makefile e código."; exit 1; }'
# significa: se o 'make primo' falhar (retornar um código de erro),
# então imprima a mensagem de erro e saia do script com código de erro 1.
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

