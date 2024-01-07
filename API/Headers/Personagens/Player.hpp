#ifndef _PLAYEAR_
#define _PLAYEAR_
#include <string>
#include "Personagem.hpp"
#include "../Habilidades/Habilidades.hpp"

class Player : public Personagem
{

private:
    uint experienciaMaxima;
    uint experienciaAtual;
    Habilidades *habilidades; //"6 pontos por nivel"

public:
    enum
    {
        LIMITE_EXPERIENCIA = 574082
    };
    
    uint getExperienciaMaxima();
    uint getExperienciaAtual();
    Habilidades *getHabilidades();
    uint setExperienciaMaxima(uint valorExperienciaMaxima);
    uint setExperienciaAtual(uint valorExperienciaAtual);
    uint calcularExperiencia(uint quantidadeExperiencia);

    Player(std::string nomePersonagem = "Player", uint valorVidaMaxima = 100, uint valorDefesa = 33, uint valorNivelPersonagem = 0, uint valorExperienciaMaxima = 50);
    ~Player();
};

#endif