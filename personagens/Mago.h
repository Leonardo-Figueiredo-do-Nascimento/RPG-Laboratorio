#include "Protagonista.h"
#include <iostream>

struct Mago : public Protagonista{
	Mago(){
		vida = 50;
		danoAtq = 25;
        vidaMax = 50;

        pocoesCura[0] = 1;
        pocoesCura[1] = 1;
        pocoesCura[2] = 1;
        }

        void ataqueDeMagia(){
            std::cout<<"sua magia causou 25 de dano"<<endl;
        }

        void contarHistoria(){
            std::cout<<"Um antigo mago de um reino a muito tempo esquecido, esse poderoso mago descobriu o elixir da vida eterna, o qual o faz não morrer de idade ou doenças, possibilitando que esse poderoso mago usufrua de sua vida para estudar e treinar suas magias, agora em busca de tesouros para suas proximas magias ele parte para uma aventura cheia de perigo e de inimigos que podem o matar"<<endl;
        }
}