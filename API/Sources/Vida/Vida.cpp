#include <iostream>
#include <string>
#include "../../Headers/Vida/Vida.hpp"

// GETTERS
uint Vida::getVidaMaxima()
{

    return vidaMaxima;
}

uint Vida::getVidaAtual()
{

    return vidaAtual;
}

uint Vida::getVidaDefesa()
{

    return vidaDefesa;
}

// SETTERS
void Vida::setVidaMaxima(uint valorVidaMaxima)
{

    vidaMaxima = valorVidaMaxima;
}

void Vida::setVidaAtual(int valorVidaAtual)
{

    vidaAtual = valorVidaAtual;
}

void Vida::setVidaDefesa(int valorVidaDefesa)
{

    vidaDefesa = valorVidaDefesa;
}

Vida::Vida(uint vidaMaxima, uint vidaDefesa)
{

    this->vidaMaxima = vidaMaxima;
    this->vidaAtual = vidaMaxima;
    this->vidaDefesa = vidaDefesa;
}

Vida::Vida(){

    vidaMaxima = 0;
    vidaAtual = 0;
    vidaDefesa = 0;
}