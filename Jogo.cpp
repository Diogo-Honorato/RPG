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
        this->vidaAtual = vidaMaxima;
    }

    uint16_t calcularVidaAtual(int pontosVida){

        vidaAtual = vidaAtual + pontosVida;

        return vidaAtual;
    }

    uint16_t getVidaMaxima()
    {

        return vidaMaxima;
    }

    uint16_t getVidaAtual(){

        return vidaAtual;
    }

    string getNome()
    {

        return nome;
    }
};

class Player: public Personagem{

private:

public:




};

int main()
{

    Personagem player("DIOGO", 100);

    cout << "Nome do player: " << player.getNome() << endl;
    player.calcularVidaAtual(-20);
    player.calcularVidaAtual(5);
    cout << "VidaMax: " << player.getVidaMaxima() << endl;
    cout << "VidaAtual: " << player.getVidaAtual() << endl;
}