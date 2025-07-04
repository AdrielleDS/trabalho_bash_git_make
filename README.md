Aluna: Adrielle Dutra da Silva
Disciplina: Sistemas de Software Livre
Como usar:

MAKEFILE:

make # Compila Todos
make primo # Compila apenas primo.cpp
make vetor # Compila apenas vetor.cpp
make matriz # Compila apenas matriz.cpp
make clean # Remove os executaveis

TESTES AUTOMATIZADOS

# Dar permissão aos scripts
chmod +x testa_*.sh

# Gerar os testes
./testa_matriz.sh # Testa uma Matriz aleatoria
./testa_vetor.sh # Testa um vetor aleatorio
./testa_primo.sh # Testa se um valor é primo

Dificuldades na implementação


Eu tive dificuldades quando digitei o comando make pra compilar os arquivos. O terminal acusava erro: Comando "make" não encontrado. E sugeria palavras similares. Então pesquisei o erro e identifiquei que meu Lixux da máquina virtual não tinha esse pacote instalado. 
Usei o comando sudo apt update inicialmente. Demorou quase 1h pra atualizar. Dai reiniciei a máquina virtual e tentei novamente usar o comando make. Sem sucesso.
Então achei o comando sudo apt install build-essential. Atualizou outras coisas e depois deu erro que não foi possível instalar alguns pacotes.
Depois tentei o comando sudo dnf install make, não funcionou também.

Por fim depois de forçar a atualização, foi instalado. 


