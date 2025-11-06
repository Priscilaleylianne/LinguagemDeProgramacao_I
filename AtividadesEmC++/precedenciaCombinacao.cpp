#include <iostream>

int main(){

    // Condições:
    bool maior_idade = true;
    bool acompanhado = true;
    bool bebado = false;

    // Expressão: maior_idade || (acompanhado && !bebado)
    // Ordem de execução: 
    // 1. !bebado (true)
    // 2. acompanhado && (true) = true
    // 3. maior_idade || (true) = true

    bool pode_entrar = maior_idade || (acompanhado && !bebado);
    // (true) || (true && true) = true

    if (pode_entrar) {
        std::cout << "Permitida a entrada." << std::endl; 
    }
    return 0;
}