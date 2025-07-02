Aluna: Adriele Dutra da Silva

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
./testa_matriz.sh # Testa uma Matriz Aleatoria
./testa_vetor.sh # Testa um vetor aleatorio
./testa_primo.sh # Testa se um valor é primo
