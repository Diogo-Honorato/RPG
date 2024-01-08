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
    //uint pontosHabilidade;

protected:
    enum
    {
        LIMITE_NIVEL_HABILIDADE = 99
    };

public:

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

    void distribuirPontosHabilidade(uint pontosHabilidade, uint indentificadorHabilidade);

};
#endif