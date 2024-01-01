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
    void definirExperiencia(uint valorExperiencia);
};

#endif