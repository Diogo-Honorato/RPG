#ifndef _PERSONAGENS_
#define _PERSONAGENS_
#include "../Vida/Vida.hpp"
#include <string>

class Personagem
{

private:
    Vida vidaPersonagem;
    uint nivelPersonagem;
    std::string nome;

public:
    uint getNivelPersonagem();

    std::string getNome();

    Vida getVidaPersonagem();

protected:
    void setNivelPersonagem(uint valorNivelPersonagem);

    void setNome(std::string nomePersonagem);

public:
    void definirAtributos(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem);
};

#endif