#include <iostream>
#include "menu/menu.h"
#include "personagens/Arqueira.h"
#include "personagens/Barbaro.h"
#include "personagens/Mago.h"
#include "personagens/Goblin.h"
#include "personagens/CavaleiroNegro.h"
#include "personagens/ReiFeiticeiro.h"
#include "fases/Caverna.h"
#include "fases/Floresta.h"
#include "fases/Castelo.h"
#include "fases/PalacioReal.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao = Menu();
	
	while(opcao != 1 || opcao != 2 || opcao != 3){
		if (opcao == 1) {
			
			int personagem;
			
			while(personagem != 1 && personagem != 2 && personagem != 3){
				
				std::cout << "Escolha um personagem:" << std::endl;
		        std::cout << "\n[1] Barbaro     Vida:      Ataque:      Pocoes de cura: 1" << std::endl;
		        std::cout << "[2] Arqueira    Vida:      Ataque:      Pocoes de cura: 2" << std::endl;
		        std::cout << "[3] Mago        Vida:      Ataque:      Pocoes de cura: 3" << std::endl;
		        
				std::cout << "\n-> ";
		    	std::cin >> personagem;
		        
		        if(personagem == 1){
		        	Barbaro b1;
		        	b1.contarHistoria();
		        	
		        	bool vitoria1 = Caverna(b1);
		        	
		        	if(vitoria1){
						bool vitoria2 = Floresta(b1);
						
						if(vitoria2){
							bool vitoria3 = Castelo(b1);
							
							if(vitoria3){
								bool bossFight = PalacioReal(b1);
							}
						}
					}
				}
				else if(personagem == 2){
					Arqueira a1;
					a1.contarHistoria();
					
					bool vitoria1 = Caverna(a1);
					
					if(vitoria1){
						bool vitoria2 = Floresta(a1);
						
						if(vitoria2){
							bool vitoria3 = Castelo(a1);
							
							if(vitoria3){
								bool bossFight = PalacioReal(a1);
							}
						}
					}
				}
					
				else if(personagem == 3){
					Mago m1;
					m1.contarHistoria();
					
					bool vitoria1 = Caverna(m1);
					
					if(vitoria1){
						bool vitoria2 = Floresta(m1);
						
						if(vitoria2){
							bool vitoria3 = Castelo(m1);
							
							if(vitoria3){
								bool bossFight = PalacioReal(m1);
							}
						}
					}
				}
				else{
					std::cout << "\nOpcao invalida"<<std::endl;
				}
			} 
		}
	        
		else if (opcao == 2) {
			
	        std::cout << "Carregando jogo salvo..." << std::endl;
	    
		} 
		else if (opcao == 3) {
	        exit(0);
	    
		} else {
	        std::cout << "Opcao invalida." << std::endl;
	    }
	}
	return 0;
}