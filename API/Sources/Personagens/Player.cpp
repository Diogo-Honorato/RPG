#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

uint Player::getExperiencia()
{

    return experiencia;
}

Habilidades *Player::getHabilidades(){

    return habilidades;
}

bool Player::setExperiencia(uint valorExperiencia)
{

    if (valorExperiencia < 0)
    {

        return false;
    }
    experiencia = valorExperiencia;

    return true;
}

Player::Player(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem, uint valorExperiencia)
    : Personagem(nomePersonagem, valorVidaMaxima, valorDefesa, valorNivelPersonagem), experiencia(valorExperiencia), 
    habilidades(new Habilidades())
{
    setExperiencia(experiencia);
}

Player::~Player(){

    delete habilidades;
}