#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

int main()
{

    Player player = Player("Diogo",100,100,0,0);

    player.getVidaPersonagem()->calcularDanoSofrido(180);
    player.getVidaPersonagem()->calcularCura(60);

    std::cout << "Nome do player: " << player.getNome() << std::endl;

    std::cout << "Vida: " << player.getVidaPersonagem()->getVidaAtual();

    std::cout << "/" << player.getVidaPersonagem()->getVidaMaxima() << std::endl;

    std::cout << "Defesa: " << player.getVidaPersonagem()->getVidaDefesa() << std::endl;

    std::cout << "Nivel: " << player.getNivelPersonagem() << std::endl;
}