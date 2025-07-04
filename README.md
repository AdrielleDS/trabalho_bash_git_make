Aluna: Adrielle Dutra da Silva  
Disciplina: Sistemas de Software Livre  



I - COMO USAR O MAKEFILE:  

Use o Makefile para compilar todos os programas ou individualmente:  

make          # Compila todos os programas  

make primo    # Compila apenas primo.cpp  

make vetor    # Compila apenas vetor.cpp  

make matriz   # Compila apenas matriz.cpp  

make clean    # Remove os executáveis gerados  



II - EXECUÇÃO DOS PROGRAMAS  

Para executar os programas (após compilá-los com make):  


./primo  
./vetor  
./matriz


III - TESTES AUTOMATIZADOS  
Dar permissão aos scripts  
Antes de executar os scripts de teste, você precisa dar permissão de execução a eles:  

chmod +x generate-test-primo.sh  
chmod +x generate-test-vetor.sh  
chmod +x generate-test-matriz.sh  


1 - Para gerar os arquivos de entrada para os testes:  

./generate-test-primo.sh   # Gera teste1-primo.in  
./generate-test-vetor.sh   # Gera teste1-vetor.in  
./generate-test-matriz.sh  # Gera teste1-matriz.in  



2 - Para executar os programas usando os arquivos de teste gerados:  

./primo < teste1-primo.in  
./vetor < teste1-vetor.in  
./matriz < teste1-matriz.in  



IV - O QUE OS PROGRAMAS FAZEM?  


primo.cpp  

Função: Verifica se um número é primo  
Entrada: Um número inteiro via stdin  
Saída: "Primo" ou "Não é primo"  

Exemplo: echo 7 | ./primo  


---------------------------------------------
vetor.cpp  

Função: Encontra o maior valor em um vetor  
Entrada:  
    Primeiro: tamanho do vetor (n)
    Depois: n números inteiros (um por linha)
    Saída: O maior número do vetor

Exemplo: echo -e "3\n5\n1\n9" | ./vetor  


--------------------------------------------
matriz.cpp  

Função: Calculadora de matrizes (soma, subtração e multiplicação)  
Entrada (interativa, via menu):  

    Opção de operação (1 para soma, 2 para subtração, 3 para multiplicação, 4 para sair)

    Tamanho da Matriz 1 (linhas e colunas)

    Elementos da Matriz 1 (um por linha)

    Tamanho da Matriz 2 (linhas e colunas)

    Elementos da Matriz 2 (um por linha)
    Saída: Matriz resultante


Exemplo (Soma de duas matrizes 2x2, depois sai):
echo -e "1\n2\n2\n1\n2\n3\n4\n2\n2\n5\n6\n7\n8\n4" | ./matriz




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

Eu tive dificuldades quando digitei o comando make para compilar os arquivos.   
O terminal acusava erro: Comando "make" não encontrado. E sugeria palavras similares.   
Então pesquisei o erro e identifiquei que meu Linux da máquina virtual não tinha esse pacote instalado.  
Usei o comando sudo apt update inicialmente. Demorou quase 1h para atualizar.   
Daí reiniciei a máquina virtual e tentei novamente usar o comando make. Sem sucesso.  
Então achei o comando sudo apt install build-essential.   
Atualizou outras coisas e depois deu erro que não foi possível instalar alguns pacotes.  
Depois tentei o comando sudo dnf install make, não funcionou também.  
Por fim, depois de forçar a atualização, o make foi instalado.  
Também tive dificuldades com o comando nano, na hora de salvar o arquivo editado e submeter.
