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

protected:
    void setVidaMaxima(uint valorVidaMaxima);

    void setVidaAtual(int valorVidaAtual);

    void setVidaDefesa(int valorVidaDefesa);
};

#endif