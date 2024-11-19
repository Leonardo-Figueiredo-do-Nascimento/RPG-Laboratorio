#include "Monstro.h"
#include "Protagonista.h"
#include <iostream>

struct CavaleiroNegro : public Monstro{
	CavaleiroNegro(){
		vida = 14;
		danoAtq = 8;
	}
	
	void ataqueDeEspada(){
		std::cout<<"Cavaleiro Negro atacou com espada causando 8 de dano"<<endl;
		
	}
}