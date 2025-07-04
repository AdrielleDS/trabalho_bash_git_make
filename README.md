Aluna: Adrielle Dutra da Silva  
Disciplina: Sistemas de Software Livre  

# Meu Projeto C++ usando bash, git e make    

Este repositório contém os exercícios de C++:  
- Programa Primo  
- Programa Vetor  
- Calculadora de Matrizes  
Cada programa tem seu próprio arquivo .cpp e scripts de teste.  

I - COMO USAR:  

MAKEFILE:  

Use o Makefile para compilar todos os programas ou individualmente:  

make         # Compila todos os programas  
make primo   # Compila apenas primo.cpp  
make vetor   # Compila apenas vetor.cpp  
make matriz  # Compila apenas matriz.cpp  
make clean   # Remove os executáveis gerados  


II - EXECUÇÃO DOS PROGRAMAS  

./primo  
./vetor  
./matriz  


III - TESTES AUTOMATIZADOS  
Dar permissão aos scripts  

Antes de executar os scripts de teste, você precisa dar permissão de execução a eles:  

1 - Gerar testes  

Para gerar os arquivos de entrada para os testes:  

chmod +x generate-test-primo.sh  
chmod +x generate-test-vetor.sh  
chmod +x generate-test-matriz.sh  

2 - Executar com testes  

Para executar os programas usando os arquivos de teste gerados:  

./primo < teste1-primo.in  
./vetor < teste1-vetor.in  
./matriz < teste1-matriz.in  


IV - O QUE OS PROGRAMAS FAZEM?  

PRIMO.CPP  

Função: Verifica se um número é primo  
Entrada: Um número inteiro via stdin  
Saída: "Primo" ou "Não é primo"  

Exemplo:  

echo 7 | ./primo  
---------------------------------------------
VETOR.CPP  

Função: Encontra o maior valor em um vetor  
Entrada:  
Primeiro: tamanho do vetor (n)  
Depois: n números inteiros  
Saída: O maior número do vetor  

Exemplo:  

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

echo -e "2\n1 2\n3 4\n5 6\n7 8\na" | ./matriz  

V - EXEMPLOS DE TESTE  

generate_test_primo.sh

    Gera um número aleatório entre 1 e 1000

    Salva em: teste(N)-primo.in

generate_test_vetor.sh

    Gera um tamanho aleatório do vetor (1-100)

    Elementos aleatórios (0-1000)

    Salva em: teste(N)-vetor.in

generate_test_matriz.sh

    Gera um tamanho aleatório da matriz (1-100)

    Duas matrizes com valores 0-1000 (Sendo N o tamanho das matrizes, coloque N*N valores para cada Matriz)

    Operação aleatória (1-soma|2-subtração|3-multiplicação)

    Salva em: teste(N)-matriz.in

VI - DIFICULDADES NA IMPLEMENTAÇÃO  


Eu tive dificuldades quando digitei o comando make pra compilar os arquivos. O terminal acusava erro: Comando "make" não encontrado. E sugeria palavras similares.  
Então pesquisei o erro e identifiquei que meu Lixux da máquina virtual não tinha esse pacote instalado. 
Usei o comando sudo apt update inicialmente. Demorou quase 1h pra atualizar. Dai reiniciei a máquina virtual e tentei novamente usar o comando make. Sem sucesso.
Então achei o comando sudo apt install build-essential. Atualizou outras coisas e depois deu erro que não foi possível instalar alguns pacotes.
Depois tentei o comando sudo dnf install make, não funcionou também.

Por fim depois de forçar a atualização, foi instalado. 

Também tive dificuldades com o comando nano, na hora de salvar o arquivo editado e submeter.
