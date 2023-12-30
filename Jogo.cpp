#include <iostream>

using namespace std;

class Personagem
{

private:
    uint16_t vidaMaxima;
    uint16_t vidaAtual;
    string nome;

public:
    Personagem(string nome, int vidaMaxima)
    {

        this->nome = nome;
        this->vidaMaxima = vidaMaxima;
    }

    uint16_t getVida()
    {

        return vidaMaxima;
    }

    string getNome()
    {

        return nome;
    }
};

int main()
{

    Personagem player("DIOGO", 100);

    cout << "Nome do player: " << player.getNome() << endl;
    cout << "Vida: " << player.getVida() << endl;
}