Aluna: Adrielle Dutra da Silva
Disciplina: Sistemas de Software Livre


I - COMO USAR:

MAKEFILE:
Use o Makefile para compilar todos os programas ou individualmente:

make          # Compila todos os programas
make primo    # Compila apenas primo.cpp
make vetor    # Compila apenas vetor.cpp
make matriz   # Compila apenas matriz.cpp
make clean    # Remove os executáveis gerados


II - EXECUÇÃO DOS PROGRAMAS

./primo
./vetor
./matriz


III - TESTES AUTOMATIZADOS

Dar permissão aos scripts
chmod +x generate-test-*.sh
----------------------------------------------------------------
1 - Gerar testes
./generate-test-primo.sh    # Gera teste1-primo.in
./generate-test-vetor.sh    # Gera teste1-vetor.in
./generate-test-matriz.sh   # Gera teste1-matriz.in

2 - Executar com testes
./primo < teste1-primo.in
./vetor < teste1-vetor.in
./matriz < teste1-matriz.in

IV - O QUE OS PROGRAMAS FAZEM?

PRIMO.CPP

Função: Verifica se um número é primo
Entrada: Um número inteiro via stdin
Saída: "Primo" ou "Não é primo"

Exemplo:
bash
echo 7 | ./primo
---------------------------------------------
VETOR.CPP

Função: Encontra o maior valor em um vetor
Entrada:
Primeiro: tamanho do vetor (n)
Depois: n números inteiros
Saída: O maior número do vetor

Exemplo:
bash
echo -e "3\n5 1 9" | ./vetor
---------------------------------------------
MATRIZ.CPP

Função: Calculadora de matrizes (soma, subtração e multiplicação)
Entrada:
Tamanho da matriz (n)
Matriz 1 (n×n)
Matriz 2 (n×n)
Operação ('a' para soma, 's' para subtração, 'm' para multiplicação)
Saída: Matriz resultante

Exemplo:
bash
echo -e "2\n1 2\n3 4\n5 6\n7 8\na" | ./matriz

V - EXEMPLOS DE TESTE

generate_test_primo.sh

Gera um número aleatório entre 1 e 1000 
Salva em: teste(N)-primo.in
---------------------------------------------------------------
generate_test_vetor_sh

Gera um tamanho aleatório do vetor (1-100)
Elementos aleatórios (0-1000)
Salva em: teste(N)-vetor.in
---------------------------------------------------------------
generate_test_matriz_sh

Gera um tamanho aleatório da matriz (1-100
Duas matrizes com valores 0-1000 (Sendo N o tamanho das matrizes, 
coloque N*N valores para cada Matriz)
Operação aleatória (a/s/m) (a-adição|s-subtração|m-multipicação)
Salva em: teste(N)-matriz.in


VI - DIFICULDADES NA IMPLEMENTAÇÃO


Eu tive dificuldades quando digitei o comando make pra compilar os arquivos. O terminal acusava erro: Comando "make" não encontrado. E sugeria palavras similares. Então pesquisei o erro e identifiquei que meu Lixux da máquina virtual não tinha esse pacote instalado. 
Usei o comando sudo apt update inicialmente. Demorou quase 1h pra atualizar. Dai reiniciei a máquina virtual e tentei novamente usar o comando make. Sem sucesso.
Então achei o comando sudo apt install build-essential. Atualizou outras coisas e depois deu erro que não foi possível instalar alguns pacotes.
Depois tentei o comando sudo dnf install make, não funcionou também.

Por fim depois de forçar a atualização, foi instalado. 

Também tive dificuldades com o comando nano, na hora de salvar o arquivo editado e submeter.
