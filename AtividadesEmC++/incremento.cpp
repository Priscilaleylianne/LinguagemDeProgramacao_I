#include <iostream>

int main() {
    int a = 5;
    int b = 5;

    // Pré-incremento: Aumenta 'a' e DEPOIS usa o novo valor
    int resultado1 = ++a; 
    // a = 6, resultado1 = 6
    std::cout << "Pre-Incremento: a = " << a << ", resultado1 = " << resultado1 << std::endl;

    // Pós-incremento: Usa 'b' e DEPOIS aumenta 'b'
    int resultado2 = b++; 
    // resultado2 = 5, b = 6
    std::cout << "Pos-Incremento: b = " << b << ", resultado2 = " << resultado2 << std::endl;

    return 0;
}