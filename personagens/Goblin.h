#ifndef GOBLIN_H
#define GOBLIN_H

#include "Monstro.h"
#include <iostream>

struct Goblin : public Monstro {
    Goblin() {
        vida = 6;
        danoAtq = 2;
    }
    
    int ataqueFacada(){
		std::cout<<"\nGoblin atacou com facada causando 2 de dano!"<< std::endl;
		return 2;
	}
};

#endif // GOBLIN_H