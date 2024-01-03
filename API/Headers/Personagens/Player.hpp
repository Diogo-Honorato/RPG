#ifndef _PLAYEAR_
#define _PLAYEAR_
#include <string>
#include "Personagem.hpp"

class Player : public Personagem
{

private:
    uint experiencia;

public:
    uint getExperiencia();

public:
    bool setExperiencia(uint valorExperiencia);

    Player(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem, uint valorExperiencia);
};

#endif