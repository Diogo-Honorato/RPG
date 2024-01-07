#include <iostream>
#include <string>
#include "../../Headers/Habilidades/Habilidades.hpp"

uint Habilidades::getVitalidade()
{
    return vitalidade;
}

uint Habilidades::getForca()
{
    return forca;
}

uint Habilidades::getResistencia()
{
    return resistencia;
}

uint Habilidades::getInteligencia()
{

    return inteligencia;
}

uint Habilidades::getAgilidade()
{

    return agilidade;
}

uint Habilidades::getCarisma()
{

    return carisma;
}

uint Habilidades::setVitalidade(uint pontosVitalidade)
{

    if (vitalidade + pontosVitalidade > LIMITE_NIVEL_HABILIDADE)
    {
        vitalidade = LIMITE_NIVEL_HABILIDADE;

        return vitalidade;
    }

    vitalidade = vitalidade + pontosVitalidade;

    return vitalidade;
}

uint Habilidades::setForca(uint pontosForca)
{

    if (forca + pontosForca > LIMITE_NIVEL_HABILIDADE)
    {

        forca = LIMITE_NIVEL_HABILIDADE;
        return forca;
    }

    forca = forca + pontosForca;

    return forca;
}

uint Habilidades::setResistencia(uint pontosResistencia)
{

    if (resistencia + pontosResistencia > LIMITE_NIVEL_HABILIDADE)
    {

        resistencia = LIMITE_NIVEL_HABILIDADE;
        return resistencia;
    }

    resistencia = resistencia + pontosResistencia;

    return resistencia;
}

uint Habilidades::setInteligencia(uint pontosInteligencia)
{

    if (inteligencia + pontosInteligencia > LIMITE_NIVEL_HABILIDADE)
    {

        inteligencia = LIMITE_NIVEL_HABILIDADE;
        return inteligencia;
    }

    inteligencia = inteligencia + pontosInteligencia;

    return inteligencia;
}

uint Habilidades::setAgilidade(uint pontosAgilidade)
{

    if (agilidade + pontosAgilidade > LIMITE_NIVEL_HABILIDADE)
    {

        agilidade = LIMITE_NIVEL_HABILIDADE;
        return agilidade;
    }

    agilidade = agilidade + pontosAgilidade;

    return agilidade;
}

uint Habilidades::setCarisma(uint pontosCarisma)
{

    if (carisma + pontosCarisma > LIMITE_NIVEL_HABILIDADE)
    {

        carisma = LIMITE_NIVEL_HABILIDADE;
        
        return carisma;
    }

    carisma = carisma + pontosCarisma;

    return carisma;
}