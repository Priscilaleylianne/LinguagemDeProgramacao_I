#include <iostream>
#include <string> // Necessário para usar std::string

int main() {
    // Declaração de variáveis
    std::string nome;
    int idade;

    // Entrada de Dados (Input)
    std::cout << "Por favor, digite seu nome: ";
    std::cin >> nome; // Lê o nome (apenas uma palavra)

    std::cout << "Agora, digite sua idade: ";
    std::cin >> idade;

    // Processamento e Saída de Dados (Output)
    std::cout << "\nOla, " << nome << "! Que legal que voce tem " << idade << " anos.";
    std::cout << std::endl; // Quebra de linha

    return 0;
}