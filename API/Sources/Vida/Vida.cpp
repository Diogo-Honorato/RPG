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
bool Vida::setVidaMaxima(uint valorVidaMaxima)
{
    if (valorVidaMaxima < 1)
    {

        return false;
    }

    vidaMaxima = valorVidaMaxima;
    vidaAtual = vidaMaxima;

    return true;
}

bool Vida::setVidaDefesa(int valorVidaDefesa)
{

    if (valorVidaDefesa < 0)
    {

        return false;
    }
    vidaDefesa = valorVidaDefesa;

    return true;
}

// Construtores
Vida::Vida(uint valorVidaMaxima, uint valorDefesa) : vidaMaxima(valorVidaMaxima), vidaDefesa(valorDefesa)
{
    setVidaDefesa(vidaDefesa);
    setVidaMaxima(vidaMaxima);
}

// Fuçoes Membro

uint Vida::calcularDanoDefesa(uint dano)
{

    uint danoRestante;

    if (dano == vidaDefesa)
    {

        return 0;
    }
    else if (dano > vidaDefesa)
    {

        danoRestante = dano - vidaDefesa;

        return danoRestante;
    }

    return 0;
}

uint Vida::calcularDanoSofrido(uint dano)
{

    uint danoAtual;

    danoAtual = calcularDanoDefesa(dano);

    if (danoAtual > vidaAtual)
    {

        vidaAtual = 0;
        return vidaAtual;
    }

    vidaAtual = vidaAtual - danoAtual;

    return vidaAtual;
}

uint Vida::calcularCura(uint valorCura)
{

    if ((valorCura + vidaAtual) > vidaMaxima)
    {

        vidaAtual = vidaMaxima;

        return vidaMaxima;
    }

    vidaAtual = vidaAtual + valorCura;

    return vidaAtual;
}