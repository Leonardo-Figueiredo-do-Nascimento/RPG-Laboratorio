#ifndef CAVALEIRONEGRO_H
#define CAVALEIRONEGRO_H

#include "Monstro.h"
#include <iostream>

struct CavaleiroNegro : public Monstro{
	
	CavaleiroNegro(){
		vida = 14;
		danoAtq = 8;
	}
	
	int ataqueEspadaNegra(){
		std::cout<<"\nCavaleiro Negro atacou com espada negra causando 8 de dano!!"<< std::endl;
		return 8;
	}
};

#endif