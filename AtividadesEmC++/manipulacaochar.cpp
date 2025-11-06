#include <iostream>

int main() {
    char inicial = 'X';
    
    // Exibe o caractere
    std::cout << "Caractere original: " << inicial << std::endl; // Saída: X
    
    // Incrementa o valor numérico do char (muda para o próximo caractere na tabela ASCII)
    inicial = inicial + 1; 
    
    // Exibe o novo caractere
    std::cout << "Proximo caractere: " << inicial << std::endl; // Saída: Y
    
    // Exibe o valor numérico (cast explícito)
    std::cout << "Codigo ASCII de Y: " << (int)inicial << std::endl; // Saída: 89
    
    return 0;
}