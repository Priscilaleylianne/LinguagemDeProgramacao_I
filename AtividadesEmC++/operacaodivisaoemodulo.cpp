#include <iostream>

int main() {
    int inteiro_a = 10;
    int inteiro_b = 3;

    double real_a = 10.0;
    double real_b = 3.0;

    // 1. Divisão Inteira (ignora a parte fracionária)
    int resultado_int = inteiro_a / inteiro_b;  // 10 / 3 = 3
    std::cout << "Divisao (int): " << resultado_int << std::endl; // Saída: 3

    // 2. Módulo (resto da divisão)
    int resto = inteiro_a % inteiro_b;        // 10 % 3 = 1 (10 = 3*3 + 1)
    std::cout << "Resto (int): " << resto << std::endl;      // Saída: 1

    // 3. Divisão de Ponto Flutuante (real)
    double resultado_double = real_a / real_b;  // 10.0 / 3.0 = 3.333...
    std::cout << "Divisao (double): " << resultado_double << std::endl; // Saída: 3.33333

    return 0;
}