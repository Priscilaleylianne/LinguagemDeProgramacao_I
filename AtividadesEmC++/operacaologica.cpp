#include <iostream>

int main() {
    int nota = 85;
    bool aprovado = false;
    
    // Operação Relacional (gera um bool)
    aprovado = nota >= 70; // aprovado = true
    
    // Operação Lógica (combina bools)
    if (aprovado && nota > 80) {
        std::cout << "Aprovado com merito!" << std::endl;
    } else if (aprovado || nota > 50) {
        std::cout << "Aprovado, parabens." << std::endl;
    }

    // Operador NOT (!)
    if (!aprovado) {
        std::cout << "Nao esta aprovado." << std::endl;
    }
    
    return 0;
}