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

    if (vitalidade + pontosVitalidade > 99)
    {
        vitalidade = 99;

        return vitalidade;
    }

    vitalidade = vitalidade + pontosVitalidade;

    return vitalidade;
}

uint Habilidades::setForca(uint pontosForca)
{

    if (forca + pontosForca > 99)
    {

        forca = 99;
        return forca;
    }

    forca = forca + pontosForca;

    return forca;
}

uint Habilidades::setResistencia(uint pontosResistencia)
{

    if (resistencia + pontosResistencia > 99)
    {

        resistencia = 99;
        return resistencia;
    }

    resistencia = resistencia + pontosResistencia;

    return resistencia;
}

uint Habilidades::setInteligencia(uint pontosInteligencia)
{

    if (inteligencia + pontosInteligencia > 99)
    {

        inteligencia = 99;
        return inteligencia;
    }

    inteligencia = inteligencia + pontosInteligencia;

    return inteligencia;
}

uint Habilidades::setAgilidade(uint pontosAgilidade)
{

    if (agilidade + pontosAgilidade > 99)
    {

        agilidade = 99;
        return agilidade;
    }

    agilidade = agilidade + pontosAgilidade;

    return agilidade;
}

uint Habilidades::setCarisma(uint pontosCarisma)
{

    if (carisma + pontosCarisma > 99)
    {

        carisma = 99;
        
        return carisma;
    }

    carisma = carisma + pontosCarisma;

    return carisma;
}