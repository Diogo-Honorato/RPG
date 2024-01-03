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
Vida::Vida(uint valorVidaMaxima = 1, uint valorDefesa = 0) : vidaMaxima(valorVidaMaxima), vidaDefesa(valorDefesa)
{
    setVidaDefesa(vidaDefesa);
    setVidaMaxima(vidaMaxima);
}


//Fuçoes Membro
uint Vida::calcularDanoSofrido(uint dano){


}

uint Vida::calcularCura(uint valorCura){


}