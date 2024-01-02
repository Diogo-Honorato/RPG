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
void Personagem::setNivelPersonagem(uint valorNivelPersonagem)
{

    nivelPersonagem = valorNivelPersonagem;
}

void Personagem::setNome(std::string nomePersonagem)
{

    nome = nomePersonagem;
}

void Personagem::definirAtributos(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem)
{
    nome = nomePersonagem;
    vidaPersonagem = new Vida(valorVidaMaxima, valorDefesa);
    nivelPersonagem = valorNivelPersonagem;
}

Personagem::~Personagem()
{
    delete vidaPersonagem;
}