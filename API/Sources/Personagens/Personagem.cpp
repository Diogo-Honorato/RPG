#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"

// GETTERS
uint Personagem::getVidaMaxima()
{

    return vidaMaxima;
}

uint Personagem::getVidaAtual()
{

    return vidaAtual;
}

uint Personagem::getNivelPersonagem()
{

    return nivelPersonagem;
}

std::string Personagem::getNome()
{

    return nome;
}

// SETTERS
void Personagem::setVidaMaxima(uint valorVidaMaxima)
{

    vidaMaxima = valorVidaMaxima;
}

void Personagem::setVidaAtual(uint valorVidaAtual)
{

    vidaAtual = valorVidaAtual;
}

void Personagem::setNivelPersonagem(uint valorNivelPersonagem)
{

    nivelPersonagem = valorNivelPersonagem;
}

void Personagem::setNome(std::string nomePersonagem)
{

    nome = nomePersonagem;
}
//*****************

void Personagem::definirAtributos(std::string nomePersonagem, uint valorVidaMaxima, uint valorNivelPersonagem)
{

    nome = nomePersonagem;
    vidaMaxima = valorVidaMaxima;
    vidaAtual = valorVidaMaxima;
    nivelPersonagem = valorNivelPersonagem;
}

uint Personagem::calcularVidaAtual(int pontosVida)
{

    vidaAtual = vidaAtual + pontosVida;

    return vidaAtual;
}