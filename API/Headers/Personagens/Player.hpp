#ifndef _PLAYEAR_
#define _PLAYEAR_
#include <string>
#include "Personagem.hpp"
#include "../Habilidades/Habilidades.hpp"

class Player : public Personagem
{

private:
    uint experiencia;
    Habilidades *habilidades;

public:
    uint getExperiencia();
    Habilidades *getHabilidades();

public:
    bool setExperiencia(uint valorExperiencia);

    Player(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem, uint valorExperiencia);
    ~Player();

};

#endif