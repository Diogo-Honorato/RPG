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

Vida Personagem::getVidaPersonagem()
{

    return vidaPersonagem;
}

// SETTERS
bool Personagem::setNivelPersonagem(uint valorNivelPersonagem)
{
    if(valorNivelPersonagem < 0){

        return false;
    }
    nivelPersonagem = valorNivelPersonagem;

    return true;
}

std::string Personagem::setNome(std::string nomePersonagem)
{
    if(nomePersonagem.length() < 3){

        return NULL;
    }

    nome = nomePersonagem;

    return nome;
}

void Personagem::definirAtributos(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem)
{
    setNome(nomePersonagem);
    setNivelPersonagem(valorNivelPersonagem);
    vidaPersonagem = Vida(valorVidaMaxima, valorDefesa);
}