#include <iostream>
#include <string>
using namespace std;

// Definição da classe Jogo
class Jogo {
private:
    string nome;
    float preco;
    int horas;

public:
    // Método para adquirir (cadastrar) um novo jogo
    void adquirir(string n, float p) {
        nome = n;
        preco = p;
        horas = 0;
    }

    // Método para simular jogar o jogo
    void jogar(int tempo) {
        horas += tempo;
    }

    // Método para exibir os dados do jogo
    void exibir() {
        cout << "Resumo do jogo:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Horas jogadas: " << horas << endl;
    }
};

int main() {  // programa principal (main)
    Jogo meuJogo;

    string nomeJogo;
    float precoJogo;
    int tempoJogado;

    // Coletando informações do usuário
    cout << "Digite o nome do jogo: ";
    getline(cin, nomeJogo);
    cout << "Digite o preco do jogo: ";
    cin >> precoJogo;
    meuJogo.adquirir(nomeJogo, precoJogo);

    cout << "Quantas horas voce quer jogar? ";
    cin >> tempoJogado;
    meuJogo.jogar(tempoJogado);

    cout << endl;
    meuJogo.exibir();

    return 0;
}

