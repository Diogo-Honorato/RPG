#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

int main()
{

    Player player = Player("Diogo");

   player.getVidaPersonagem()->calcularDanoSofrido(50);
   player.getVidaPersonagem()->calcularCura(10);
   player.getVidaPersonagem()->calcularCura(60);
   player.calcularExperiencia(60);
   player.calcularExperiencia(10);
   player.calcularExperiencia(100);


        
    std::cout << "Player: " << player.getNome() << std::endl;

    std::cout << "Nivel: " << player.getNivelPersonagem() << std::endl;

    std::cout << "Vida: " << player.getVidaPersonagem()->getVidaAtual();

    std::cout << "/" << player.getVidaPersonagem()->getVidaMaxima() << std::endl;

    std::cout << "Defesa: " << player.getVidaPersonagem()->getVidaDefesa() << std::endl;

    std::cout << "Exp: " << player.getExperienciaAtual();

    std::cout << "/" << player.getExperienciaMaxima() << std::endl;
}