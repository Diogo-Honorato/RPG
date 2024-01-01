#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

uint Player::getExperiencia()
{

    return experiencia;
}

void Player::definirExperiencia(uint valorExperiencia)
{

    experiencia = valorExperiencia;
}
