#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 3;
    
    // Divisão Inteira (ignora o resto)
    int quociente = num1 / num2; // quociente é 3
    
    // Módulo (calcula o resto)
    int resto = num1 % num2; // resto é 1
    
    // Conversão para Divisão Real
    double resultado_real = (double)num1 / num2; // resultado_real é 3.333...

    std::cout << "10 / 3 (int) = " << quociente << std::endl;
    std::cout << "10 % 3 (resto) = " << resto << std::endl;
    std::cout << "10 / 3 (double) = " << resultado_real << std::endl;
    
    return 0;
}