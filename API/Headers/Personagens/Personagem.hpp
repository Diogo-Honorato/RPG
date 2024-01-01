#ifndef _PERSONAGENS_
#define _PERSONAGENS_
#include <string>

class Personagem
{

private:
    uint vidaMaxima;
    uint vidaAtual;
    uint nivelPersonagem;
    std::string nome;

public:
    uint getVidaMaxima();

    uint getVidaAtual();

    uint getNivelPersonagem();

    std::string getNome();

protected:
    void setVidaMaxima(uint valorVidaMaxima);

    void setVidaAtual(uint valorVidaAtual);

    void setNivelPersonagem(uint valorNivelPersonagem);

    void setNome(std::string nomePersonagem);

public:
    void definirAtributos(std::string nomePersonagem, uint valorVidaMaxima, uint valorNivelPersonagem);

    uint calcularVidaAtual(int pontosVida);
};

#endif