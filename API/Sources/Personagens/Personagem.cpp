#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"

// GETTERS
uint Personagem::getNivelPersonagem()
{

    return nivelPersonagem;
}

std::string Personagem::getNome()
{

    return nome;
}

Vida *Personagem::getVidaPersonagem()
{

    return vidaPersonagem;
}

// SETTERS
bool Personagem::setNivelPersonagem(uint valorNivelPersonagem)
{
    if (valorNivelPersonagem > LIMITE_NIVEL_PERSONAGEM)
    {
        nivelPersonagem = LIMITE_NIVEL_PERSONAGEM;
        return false;
    }
    nivelPersonagem = valorNivelPersonagem;

    return true;
}

std::string Personagem::setNome(std::string nomePersonagem)
{
    if (nomePersonagem.length() < 3)
    {

        return NULL;
    }

    nome = nomePersonagem;

    return nome;
}

Personagem::Personagem(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem)
    : nome(nomePersonagem), vidaPersonagem(new Vida(valorVidaMaxima, valorDefesa)), nivelPersonagem(valorNivelPersonagem)
{
    setNome(nome);
    setNivelPersonagem(nivelPersonagem);
}

Personagem::~Personagem()
{

    delete vidaPersonagem;
}