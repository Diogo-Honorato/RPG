#ifndef _PERSONAGENS_
#define _PERSONAGENS_
#include "../Vida/Vida.hpp"
#include <string>

class Personagem
{

private:
    std::string nome;
    Vida vidaPersonagem;
    uint nivelPersonagem;

public:
    uint getNivelPersonagem();

    std::string getNome();

    Vida getVidaPersonagem();

protected:
    bool setNivelPersonagem(uint valorNivelPersonagem);

    std::string setNome(std::string nomePersonagem);

public:
    Personagem(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem);
};

#endif