#include <iostream>
#include "menu/menu.h"

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
		        	
				}
				else if(personagem == 2){
					
				}
				else if(personagem == 3){
				
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