#include <iostream>
// <stdlib.h> não é necessário para este código específico em C++
// <stdio.h> é substituído por <iostream>

// A função main padrão em C++ retorna um int
int main() {

    // Definindo uma variavel (igual ao C)
    int a = 5, b;

    // Imprimindo a variavel "a" (usando std::cout)
    std::cout << a;

    // Concatenando (em C++ usamos o operador << para "enviar" dados para a saída)
    std::cout << "\nO valor da var a eh: " << a;

    // Mudando o valor de "a" (igual ao C)
    a = 15;

    // Concatenando
    std::cout << "\nO valor da var a eh: " << a;

    // Lendo valores (usando std::cin)
    // É uma boa prática adicionar um prompt para o usuário saber o que fazer
    std::cout << "\nDigite um valor para b: ";
    std::cin >> b;

    // Opcional: confirmar o valor lido
    std::cout << "O valor que voce digitou para b foi: " << b << std::endl;

    // main deve retornar 0 em caso de sucesso
    return 0;
}