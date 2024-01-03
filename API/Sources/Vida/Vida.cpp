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
    if(valorVidaMaxima < 1){

        return false;
    }

    vidaMaxima = valorVidaMaxima;
    vidaAtual = vidaMaxima;

    return true;
}

bool Vida::setVidaDefesa(int valorVidaDefesa)
{
    
    if(valorVidaDefesa < 0){

        return false;
    }
    vidaDefesa = valorVidaDefesa;

    return true;
}

//Construtores
Vida::Vida(uint vidaMaxima, uint vidaDefesa)
{
    setVidaDefesa(vidaDefesa);
    setVidaMaxima(vidaMaxima);
}

Vida::Vida(){

    vidaMaxima = 0;
    vidaAtual = 0;
    vidaDefesa = 0;
}

//Fuçoes Membro
uint Vida::calcularDanoSofrido(uint dano){


}

uint Vida::calcularCura(uint valorCura){


}