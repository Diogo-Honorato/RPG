#include <iostream>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

int main()
{

    Player player;

    player.definirAtributos("Diogo",100,10);
    player.calcularVidaAtual(-40);

    std::cout << "Nome do player: " << player.getNome() << std::endl; 
    std::cout << "VidaMax: " << player.getVidaMaxima() << std::endl;
    std::cout << "VidaAtual: " << player.getVidaAtual() << std::endl;
    std::cout << "Nivel: " << player.getNivelPersonagem() << std::endl;
}