#ifndef MAGO_H
#define MAGO_H


#include "Protagonista.h"
#include <iostream>

struct Mago : public Protagonista{
	Mago(){
		vida = 50;
		danoAtq = 30;
        vidaMax = 50;
		classe = "Mago";  
        pocoesCura[0] = 1;
        pocoesCura[1] = 1;
        pocoesCura[2] = 1;
    }

    void contarHistoria(){
        std::cout<<"\nUm antigo mago de um reino a muito tempo esquecido, esse poderoso mago descobriu o elixir da vida eterna, o qual o faz nao morrer de idade ou doenças, possibilitando que esse poderoso mago usufrua de sua vida para estudar e treinar suas magias, agora em busca de tesouros para suas proximas magias ele parte para uma aventura cheia de perigo e de inimigos que podem o matar"<<std::endl;
    }
};

#endif