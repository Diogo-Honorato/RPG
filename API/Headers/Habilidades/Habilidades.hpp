#ifndef _HABILIDADES_
#define _HABILIDADES_
#include <string>

class Habilidades
{

private:
    uint vitalidade;
    uint forca;
    uint resistencia;
    uint inteligencia;
    uint agilidade;
    uint carisma;
    // uint pontosHabilidade;

protected:
    enum
    {
        LIMITE_NIVEL_HABILIDADE = 99
    };

public:
    Habilidades(uint pontosVitalidade = 10, uint pontosForca = 6, uint pontosResistencia = 10, uint pontosInteligencia = 3, uint pontosAgilidade = 5, uint pontosCarisma = 4);

    uint getVitalidade();
    uint getForca();
    uint getResistencia();
    uint getInteligencia();
    uint getAgilidade();
    uint getCarisma();

    uint setVitalidade(uint pontosVitalidade);
    uint setForca(uint pontosForca);
    uint setResistencia(uint pontosResistencia);
    uint setInteligencia(uint pontosInteligencia);
    uint setAgilidade(uint pontosAgilidade);
    uint setCarisma(uint pontosCarisma);
};
#endif