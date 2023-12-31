#include <iostream>
#include "../../Headers/Personagem/Personagem.hpp"

int main()
{

    Personagem player("DIOGO", 100);

    std::cout << "Nome do player: " << player.getNome() << std::endl;

    player.calcularVidaAtual(-20);
    player.calcularVidaAtual(5);
    
    std::cout << "VidaMax: " << player.getVidaMaxima() << std::endl;
    std::cout << "VidaAtual: " << player.getVidaAtual() << std::endl;
}