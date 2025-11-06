#include <iostream>
#include <string>

int main() {
    int idade_aluno = 17;
    int idade_minima = 18;
    double nota = 7.5;
    double media_minima = 7.0;
    char letra_atual = 'c';
    char letra_comparacao = 'A';
    
    // 1. Comparação de Igualdade e Diferença (int)
    bool e_maior_idade = idade_aluno >= idade_minima; // 17 >= 18 -> false
    bool idades_diferentes = idade_aluno != idade_minima; // 17 != 18 -> true
    
    std::cout << "Aluno e maior de idade? " << std::boolalpha << e_maior_idade << std::endl;
    // std::boolalpha faz com que 'true' ou 'false' seja exibido como texto

    // 2. Comparação com Ponto Flutuante (double)
    bool nota_suficiente = nota >= media_minima; // 7.5 >= 7.0 -> true
    std::cout << "Nota e suficiente? " << nota_suficiente << std::endl;

    // 3. Comparação de Caracteres (baseada no código ASCII)
    // O código ASCII de 'c' (99) é maior que o de 'A' (65)
    bool char_maior = letra_atual > letra_comparacao; // 'c' > 'A' -> true
    std::cout << "O char '" << letra_atual << "' e maior que '" << letra_comparacao << "'? " << char_maior << std::endl;
    
    // 4. Exemplo de Igualdade
    bool numeros_iguais = (nota * 2) == 15.0; // 15.0 == 15.0 -> true
    std::cout << "Nota duplicada e igual a 15? " << numeros_iguais << std::endl;
    
    return 0;
}