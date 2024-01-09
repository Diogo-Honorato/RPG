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
    if (getNivelPersonagem() == LIMITE_NIVEL_PERSONAGEM && valorExperienciaAtual > LIMITE_EXPERIENCIA)
    {

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

uint Player::aumentarVidaMaxima(uint pontosHabilidadeVitalidade)
{

    uint resultadoVidaMaxima = pontosHabilidadeVitalidade * CONSTANTE_AUMENTO_VIDA;

    getVidaPersonagem()->setVidaMaxima(resultadoVidaMaxima);

    return getVidaPersonagem()->getVidaMaxima();
}

uint Player::aumentarDefesa(uint pontosHabilidadeResistencia)
{

    uint resultadoDefesa = pontosHabilidadeResistencia * CONSTANTE_AUMENTO_DEFESA;

    getVidaPersonagem()->setVidaDefesa(resultadoDefesa);

    return getVidaPersonagem()->getVidaDefesa();
}

void Player::distribuirPontosHabilidade(uint pontosHabilidade, uint indentificadorHabilidade)
{

    switch (indentificadorHabilidade)
    {
    case 1:
        habilidades->setVitalidade(pontosHabilidade);
        aumentarVidaMaxima(habilidades->getVitalidade());
        break;

    case 2:
        habilidades->setForca(pontosHabilidade);
        break;

    case 3:
        habilidades->setResistencia(pontosHabilidade);
        aumentarDefesa(habilidades->getResistencia());
        break;

    case 4:
        habilidades->setInteligencia(pontosHabilidade);
        break;

    case 5:
        habilidades->setAgilidade(pontosHabilidade);
        break;

    case 6:
        habilidades->setCarisma(pontosHabilidade);
        break;

    default:
        std::cout << "ESCOLHA UMA HABILIDADE VALIDA" << std::endl;
        break;
    }
}

Player::Player(std::string nomePersonagem, uint valorVidaMaxima, uint valorDefesa, uint valorNivelPersonagem, uint valorExperienciaMaxima)
    : Personagem(nomePersonagem, valorVidaMaxima, valorDefesa, valorNivelPersonagem), experienciaMaxima(valorExperienciaMaxima), experienciaAtual(0), habilidades(new Habilidades())
{
    aumentarVidaMaxima(habilidades->getVitalidade());
    aumentarDefesa(habilidades->getResistencia());
}

Player::~Player()
{

    delete habilidades;
}