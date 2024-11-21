#ifndef REIFEITICEIRO_H
#define REIFEITICEIRO_H

#include "Monstro.h"
#include "Mago.h"
#include "Barbaro.h"
#include "Arqueira.h"
#include <iostream>

struct ReiFeiticeiro : public Monstro{
	ReiFeiticeiro(){
		vida = 80;
		danoAtq = 20;
	}
	
	void ataqueDeMagiaNegra(Barbaro& b){
		b.vida -= 20;
		std::cout<<"\nRei Feiticeiro atacou com magia negra causando 20 de dano"<<endl;
	}
	
	void ataqueDeMagiaNegra(Mago& m){
		m.vida -= 20;
		std::cout<<"\nRei Feiticeiro atacou com magia negra causando 20 de dano"<<endl;
	}
	
	void ataqueDeMagiaNegra(Arqueira& a){
		a.vida -= 20;
		std::cout<<"\nRei Feiticeiro atacou com magia negra causando 20 de dano"<<endl;
	}
};

#endif