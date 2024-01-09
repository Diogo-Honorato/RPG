#ifndef _PLAYEAR_
#define _PLAYEAR_
#include <string>
#include "Personagem.hpp"
#include "../Habilidades/Habilidades.hpp"

class Player : public Personagem
{

private:
    uint experienciaMaxima;
    uint experienciaAtual;
    // uint cargaMaxima;
    // uint cargaAtual;
    Habilidades *habilidades; //"6 pontos por nivel"

protected:
    enum
    {
        LIMITE_EXPERIENCIA = 574082,
        CONSTANTE_AUMENTO_VIDA = 100,
        CONSTANTE_AUMENTO_DEFESA = 30
    };

public:
    uint getExperienciaMaxima();
    uint getExperienciaAtual();
    Habilidades *getHabilidades();
    uint setExperienciaMaxima(uint valorExperienciaMaxima);
    uint setExperienciaAtual(uint valorExperienciaAtual);
    uint calcularExperiencia(uint quantidadeExperiencia);
    uint aumentarVidaMaxima(uint pontosHabilidadeVitalidade);
    uint aumentarDefesa(uint pontosHabilidadeResistencia);
    // uint definirCargaMaximaInicial();
    // uint denifirDanoAtaqueInicial();
    // uint definirNivelInicial();
    void distribuirPontosHabilidade(uint pontosHabilidade, uint indentificadorHabilidade);
    Player(std::string nomePersonagem = "Player", uint valorVidaMaxima = 0, uint valorDefesa = 0, uint valorNivelPersonagem = 0, uint valorExperienciaMaxima = 50);
    ~Player();
};

#endif