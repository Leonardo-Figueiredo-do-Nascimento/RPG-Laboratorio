#include "Monstro.h"
#include "Mago.h"
#include "Arqueira.h"
#include "Barbaro.h"
#include <iostream>
struct Goblin : public Monstro{
	Goblin(){
		vida = 6;
		danoAtq = 2;
	}
	
	void ataqueDeFaca(Mago m){
		m.vida -= 2;
		std::cout<<"Goblin atacou com faca causando 2 de dano"<<endl;
	}
	void ataqueDeFaca(Barbaro b){
		b.vida -= 2;
		std::cout<<"Goblin atacou com faca causando 2 de dano"<<endl;
		
	}
	void ataqueDeFaca(Arqueira a){
		a.vida -= 2;
		std::cout<<"Goblin atacou com faca causando 2 de dano"<<endl;
		
	}
}