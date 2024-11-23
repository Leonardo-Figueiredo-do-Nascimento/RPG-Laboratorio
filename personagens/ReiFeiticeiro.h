#ifndef REIFEITICEIRO_H
#define REIFEITICEIRO_H

#include "Monstro.h"
#include <iostream>

struct ReiFeiticeiro : public Monstro{
	ReiFeiticeiro(){
		vida = 80;
		danoAtq = 20;
	}
	
	int ataqueMagiaNegra(){
		std::cout<<"\nRei Feiticeiro atacou com magia negra causando 20 de dano!!!"<<std::endl;
		return 20;
	}
};

#endif