#ifndef _VIDA_
#define _VIDA_

class Vida
{
private:
    uint vidaMaxima;
    uint vidaAtual;
    uint vidaDefesa;

public:
    Vida(uint vidaMaxima, uint vidaDefesa);

    uint getVidaMaxima();

    uint getVidaAtual();

    uint getVidaDefesa();

    uint calcularDanoSofrido(uint dano);

    uint calcularCura(uint valorCura);

public:
    bool setVidaMaxima(uint valorVidaMaxima);

    bool setVidaDefesa(int valorVidaDefesa);

private:
    uint calcularDanoDefesa(uint dano);
};

#endif