#ifndef CAVALEIRONEGRO_H
#define CAVALEIRONEGRO_H

#include "Monstro.h"
#include "Mago.h"
#include "Barbaro.h"
#include "Arqueira.h"
#include <iostream>

struct CavaleiroNegro : public Monstro{
	CavaleiroNegro(){
		vida = 14;
		danoAtq = 8;
	}
	
	void ataqueDeEspada(Barbaro& b){
		b.vida -= 8;
		std::cout<<"Cavaleiro Negro atacou com espada causando 8 de dano"<<endl;
	}
	
	void ataqueDeEspada(Mago& m){
		m.vida -= 8;
		std::cout<<"Cavaleiro Negro atacou com espada causando 8 de dano"<<endl;
	}
	
	void ataqueDeEspada(Arqueira& a){
		a.vida -= 8;
		std::cout<<"Cavaleiro Negro atacou com espada causando 8 de dano"<<endl;	
	}
};

#endif