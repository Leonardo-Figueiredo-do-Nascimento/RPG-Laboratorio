#ifndef MAGO_H
#define MAGO_H


#include "Protagonista.h"
#include "Goblin.h"
#include "CavaleiroNegro.h"
#include "ReiFeiticeiro.h"
#include <iostream>

struct Mago : public Protagonista{
	Mago(){
		vida = 50;
		danoAtq = 25;
        vidaMax = 50;
		classe = "Mago";  
        pocoesCura[0] = 1;
        pocoesCura[1] = 1;
        pocoesCura[2] = 1;
    }

    void ataqueDeMagia(Goblin g){
    	g.vida -= 25;
        std::cout<<"sua magia causou 25 de dano"<<endl;
    }
    void ataqueDeMagia(CavaleiroNegro c){
    	c.vida -= 25;
        std::cout<<"sua magia causou 25 de dano"<<endl;
    }
    void ataqueDeMagia(ReiFeiticeiro r){
    	r.vida -= 25;
        std::cout<<"sua magia causou 25 de dano"<<endl;
    }

    void contarHistoria(){
        std::cout<<"Um antigo mago de um reino a muito tempo esquecido, esse poderoso mago descobriu o elixir da vida eterna, o qual o faz não morrer de idade ou doenças, possibilitando que esse poderoso mago usufrua de sua vida para estudar e treinar suas magias, agora em busca de tesouros para suas proximas magias ele parte para uma aventura cheia de perigo e de inimigos que podem o matar"<<endl;
    }
};

#endif