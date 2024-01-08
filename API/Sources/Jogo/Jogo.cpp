#include <iostream>
#include <string>
#include "../../Headers/Personagens/Personagem.hpp"
#include "../../Headers/Personagens/Player.hpp"

int main()
{

    Player player = Player("Diogo");
    /*
       player.getVidaPersonagem()->calcularDanoSofrido(50);
       player.getVidaPersonagem()->calcularCura(10);
       player.getVidaPersonagem()->calcularCura(60);
       player.calcularExperiencia(60);
       player.calcularExperiencia(10);
       player.calcularExperiencia(100);
    */

    /*
        std::cout << "Player: " << player.getNome() << std::endl;

        std::cout << "Nivel: " << player.getNivelPersonagem() << std::endl;

        std::cout << "Vida: " << player.getVidaPersonagem()->getVidaAtual();

        std::cout << "/" << player.getVidaPersonagem()->getVidaMaxima() << std::endl;

        std::cout << "Defesa: " << player.getVidaPersonagem()->getVidaDefesa() << std::endl;

        std::cout << "Exp: " << player.getExperienciaAtual();

        std::cout << "/" << player.getExperienciaMaxima() << std::endl;
    */

 
    player.getHabilidades()->distribuirPontosHabilidade(10, 1);
    player.getHabilidades()->distribuirPontosHabilidade(23, 2);
    player.getHabilidades()->distribuirPontosHabilidade(17, 3);
    player.getHabilidades()->distribuirPontosHabilidade(16, 4);
    player.getHabilidades()->distribuirPontosHabilidade(19, 5);
    player.getHabilidades()->distribuirPontosHabilidade(30, 6);


    std::cout << "Vitalidade: " << player.getHabilidades()->getVitalidade() << std::endl;
    std::cout << "Forca: " << player.getHabilidades()->getForca() << std::endl;
    std::cout << "Resistencia: " << player.getHabilidades()->getResistencia() << std::endl;
    std::cout << "Inteligencia: " << player.getHabilidades()->getInteligencia() << std::endl;
    std::cout << "Agilidade: " << player.getHabilidades()->getAgilidade() << std::endl;
    std::cout << "Carisma: " << player.getHabilidades()->getCarisma() << std::endl;
}