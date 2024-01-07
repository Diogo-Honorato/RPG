#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

uint Player::getExperienciaMaxima()
{

    return experienciaMaxima;
}

uint Player::getExperienciaAtual()
{

    return experienciaAtual;
}

Habilidades *Player::getHabilidades()
{

    return habilidades;
}

uint Player::setExperienciaMaxima(uint valorExperienciaMaxima)
{

    if (valorExperienciaMaxima > LIMITE_EXPERIENCIA)
    {
        experienciaMaxima = LIMITE_EXPERIENCIA;

        return experienciaMaxima;
    }
    else
    {

        experienciaMaxima = valorExperienciaMaxima;
    }

    return experienciaMaxima;
}

uint Player::setExperienciaAtual(uint valorExperienciaAtual)
{
    if(getNivelPersonagem() == LIMITE_NIVEL_PERSONAGEM && valorExperienciaAtual > LIMITE_EXPERIENCIA){

        experienciaAtual = LIMITE_EXPERIENCIA;
    }
    else
    {
        experienciaAtual = valorExperienciaAtual;
    }

    return experienciaAtual;
}

uint Player::calcularExperiencia(uint quantidadeExperiencia)
{
    uint totalExperiencia = getExperienciaAtual() + quantidadeExperiencia;

    if (totalExperiencia >= getExperienciaMaxima())
    {
        setExperienciaAtual(totalExperiencia);

        while (getExperienciaAtual() >= getExperienciaMaxima() && (getNivelPersonagem() < LIMITE_NIVEL_PERSONAGEM || getExperienciaAtual() < LIMITE_EXPERIENCIA))
        {
            uint nivelPersonagemAtual = getNivelPersonagem();

            uint experienciaRestante = (getExperienciaAtual() - getExperienciaMaxima());

            setNivelPersonagem(nivelPersonagemAtual + 1);

            setExperienciaMaxima(getExperienciaMaxima() * 1.1);

            setExperienciaAtual(experienciaRestante);
        }

        return getExperienciaMaxima();
    }
    else
    {

        setExperienciaAtual(getExperienciaAtual() + quantidadeExperiencia);

        return getExperienciaAtual();
    }

    return quantidadeExperiencia;
}

Player::Player(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem, uint valorExperienciaMaxima)
    : Personagem(nomePersonagem, valorVidaMaxima, valorDefesa, valorNivelPersonagem), experienciaMaxima(valorExperienciaMaxima), experienciaAtual(0), habilidades(new Habilidades())
{
}

Player::~Player()
{

    delete habilidades;
}