#include <iostream>

int main() {
    int valor = 20;

    // valor = valor + 5;
    valor += 5; 
    std::cout << "Valor após += 5: " << valor << std::endl; // Saída: 25

    // valor = valor / 4;
    valor /= 4; 
    std::cout << "Valor após /= 4: " << valor << std::endl; // Saída: 6 (25 / 4 = 6 na divisão int)

    // valor = valor % 3;
    valor %= 3; 
    std::cout << "Valor após %= 3: " << valor << std::endl; // Saída: 0 (6 % 3 = 0)

    return 0;
}