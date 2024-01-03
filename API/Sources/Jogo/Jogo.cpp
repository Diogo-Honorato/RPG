#include <iostream>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

int main()
{

    Player player = Player("Diogo",100,100,0,0);

    std::cout << "Nome do player: " << player.getNome() << std::endl;

    std::cout << "VidaMax: " << player.getVidaPersonagem().getVidaMaxima() << std::endl;

    std::cout << "VidaAtual: " << player.getVidaPersonagem().getVidaAtual() << std::endl;

    std::cout << "Defesa: " << player.getVidaPersonagem().getVidaDefesa() << std::endl;

    std::cout << "Nivel: " << player.getNivelPersonagem() << std::endl;

    std::cout << "Exp: " << player.getExperiencia() << std::endl;
}