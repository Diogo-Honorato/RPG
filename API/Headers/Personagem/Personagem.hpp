#ifndef _Personagem_
#define _Personagem_
#include <string>

class Personagem
{

    private:
    uint vidaMaxima;
    uint vidaAtual;
    std::string nome;

    public:
    Personagem(std::string nome, int vidaMaxima);

    uint calcularVidaAtual(int pontosVida);

    uint getVidaMaxima();

    uint getVidaAtual();

    std::string getNome();
};

#endif