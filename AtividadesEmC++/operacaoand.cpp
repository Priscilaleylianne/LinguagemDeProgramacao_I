#include <iostream>

int main() {
    int nota = 80;
    int frequencia = 90;

    // Duas condições: (nota >= 70) E (frequencia >= 75)
    bool aprovado = (nota >= 70) && (frequencia >= 75); 
    // (true) && (true) = true

    if (aprovado) {
        std::cout << "Aprovado! (Nota e Frequencia OK)" << std::endl; // Executa
    }

    // Se nota fosse 60: (false) && (true) = false
    // Se frequencia fosse 50: (true) && (false) = false
    
    return 0;
}