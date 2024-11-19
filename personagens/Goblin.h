#include "Monstro.h"
#include "Protagonista.h"
#include <iostream>
struct Goblin : public Monstro{
	Goblin(){
		vida = 6;
		danoAtq = 2;
	}
	
	void ataqueDeFaca(){
		std::cout<<"Goblin atacou com faca causando 2 de dano"<<endl;
		
	}
}