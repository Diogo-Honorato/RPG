#include <iostream>

using namespace std;

class Personagem
{

private:
    int vida;
    string nome;

public:
    Personagem(string nome, int vida)
    {

        this->nome = nome;
        this->vida = vida;
    }

    int getVida()
    {

        return vida;
    }

    string getNome()
    {

        return nome;
    }
};

int main()
{

    Personagem player("DIOGO", 100);

    cout << "Nome do player: " << player.getNome() << endl;
    cout << "Vida: " << player.getVida() << endl;
}