#include <iostream>  // Substitui <stdio.h>
#include <cstdlib>   // Substitui <stdlib.h> (para std::system)

// Função principal do programa (padrão C++)
int main() {

    // Definindo Variáveis (idêntico ao C)
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    // Condicional Simples (a sintaxe do 'if' é a mesma)
    // Apenas trocamos printf por std::cout
    if (a == 5) {
        std::cout << "\n A variavel a = 5";
    }
    if (b == 2.5) {
        std::cout << "\n A variavel b = 2.5";
    }
    if (c == 'x') {
        std::cout << "\n A variavel c = letra x";
    }

    // Número par ou impar (a sintaxe do 'if-else' é a mesma)
    if (a % 2 == 1) {
        std::cout << "\n A variavel a eh impar";
    } else {
        std::cout << "\n A variavel a eh par";
    }

    // Condicional Composta (a sintaxe do 'if-else if-else' é a mesma)
    if (opcao == 1) {
        std::cout << "\nA opcao = 1";
    } else if (opcao == 2) {
        std::cout << "\nA opcao = 2";
    } else {
        std::cout << "\nA opcao nao eh igual a 1 e nem 2";
    }

    // Pausa o programa após executar
    std::cout << "\n"; // Adiciona uma quebra de linha
    std::system("pause"); // Boa prática usar std::system

    return 0; // Retorno padrão da main
}