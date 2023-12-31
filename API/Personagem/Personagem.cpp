#include <iostream>
#include <string>
#include "../Headers/Personagem/Personagem.hpp"

Personagem::Personagem(std::string nome, int vidaMaxima)
{

    this->nome = nome;
    this->vidaMaxima = vidaMaxima;
    this->vidaAtual = vidaMaxima;
}

uint Personagem::calcularVidaAtual(int pontosVida)
{

    vidaAtual = vidaAtual + pontosVida;

    return vidaAtual;
}

uint Personagem::getVidaMaxima()
{

    return vidaMaxima;
}

uint Personagem::getVidaAtual()
{

    return vidaAtual;
}

std::string Personagem::getNome()
{

    return nome;
}