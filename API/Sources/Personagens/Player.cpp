#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

uint Player::getExperiencia()
{

    return experiencia;
}

bool Player::setExperiencia(uint valorExperiencia)
{

    if(valorExperiencia < 0){

        return false;
    }
    experiencia = valorExperiencia;

    return true;

}

void Player::definirAtributos(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem, uint valorExperiencia){

    
}