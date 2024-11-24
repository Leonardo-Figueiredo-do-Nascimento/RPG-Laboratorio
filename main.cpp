#include <iostream>
#include <fstream>
#include <sstream>
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
			
			std::cout<<"\nHa muito tempo atras um reino vivia em paz, ate ser invadido pelo exercito das trevas do Rei Feiticeiro."<<std::endl;
			std::cout<<"Agora cabe a voce trazer a paz de volta ao reino, comece sua jornada para derrotar o Rei Feiticeiro."<<std::endl;
			
			int personagem;
			
			while(personagem != 1 && personagem != 2 && personagem != 3){
				
				std::cout << "\nEscolha um personagem:" << std::endl;
		        std::cout << "\n[1] Barbaro     Vida: 100    Ataque: 20     Pocoes de cura: 1" << std::endl;
		        std::cout << "[2] Arqueira    Vida: 70     Ataque: 22     Pocoes de cura: 2" << std::endl;
		        std::cout << "[3] Mago        Vida: 50     Ataque: 30     Pocoes de cura: 3" << std::endl;
		        
				std::cout << "\n-> ";
		    	std::cin >> personagem;
		        
		        if(personagem == 1){
		        	Barbaro b1;
		        	b1.contarHistoria();
		        	
		        	std::ofstream arquivo("save/save.txt");
		        	
		        	arquivo << "fase: " << 1 << std::endl;
				    arquivo << "classe: " << "Barbaro" << std::endl;
				    arquivo << "vida: " << b1.vida << std::endl;
				    arquivo.close();
				    
		        	bool vitoria1 = Caverna(b1);
		        	
		        	if(vitoria1){
		        		b1.fase +=1;
		        		std::ofstream arquivo("save/save.txt");
		        		arquivo << "fase: " << b1.fase << std::endl;
		        		arquivo << "classe: " << "Barbaro" << std::endl;
				    	arquivo << "vida: " << b1.vida << std::endl;
				    	arquivo.close();
		        		
						bool vitoria2 = Floresta(b1);
						
						if(vitoria2){
							b1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << b1.fase << std::endl;
							arquivo << "classe: " << "Barbaro" << std::endl;
				    		arquivo << "vida: " << b1.vida << std::endl;
				    		arquivo.close();
				    		
							bool vitoria3 = Castelo(b1);
							
							if(vitoria3){
								b1.fase +=1;
								std::ofstream arquivo("save/save.txt");
								arquivo << "fase: " << b1.fase << std::endl;
								arquivo << "classe: " << "Barbaro" << std::endl;
				    			arquivo << "vida: " << b1.vida << std::endl;
				    			arquivo.close();
				    			
								bool bossFight = PalacioReal(b1);
								exit(0);
							}
						}
					}
				}
				else if(personagem == 2){
					Arqueira a1;
					a1.contarHistoria();
					
					std::ofstream arquivo("save/save.txt");
		        	
		        	arquivo << "fase: " << 1 << std::endl;
				    arquivo << "classe: " << "Arqueira" << std::endl;
				    arquivo << "vida: " << a1.vida << std::endl;
					
					bool vitoria1 = Caverna(a1);
					
					if(vitoria1){
						a1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << a1.fase << std::endl;
						arquivo << "classe: " << "Arqueira" << std::endl;
				    	arquivo << "vida: " << a1.vida << std::endl;
				    	arquivo.close();
						bool vitoria2 = Floresta(a1);
						
						if(vitoria2){
							a1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << a1.fase << std::endl;
							arquivo << "classe: " << "Arqueira" << std::endl;
					    	arquivo << "vida: " << a1.vida << std::endl;
							arquivo.close();
							bool vitoria3 = Castelo(a1);
							
							if(vitoria3){
								a1.fase +=1;
								std::ofstream arquivo("save/save.txt");
								arquivo << "fase: " << a1.fase << std::endl;
								arquivo << "classe: " << "Arqueira" << std::endl;
						    	arquivo << "vida: " << a1.vida << std::endl;
								arquivo.close();
								bool bossFight = PalacioReal(a1);
								exit(0);
							}
						}
					}
				}
					
				else if(personagem == 3){
					Mago m1;
					m1.contarHistoria();
					
					std::ofstream arquivo("save/save.txt");
		        	
		        	arquivo << "fase: " << 1 << std::endl;
				    arquivo << "classe: " << "Mago" << std::endl;
				    arquivo << "vida: " << m1.vida << std::endl;
					
					bool vitoria1 = Caverna(m1);
					
					if(vitoria1){
						m1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << m1.fase << std::endl;
						arquivo << "classe: " << "Mago" << std::endl;
				    	arquivo << "vida: " << m1.vida << std::endl;
				    	arquivo.close();
						bool vitoria2 = Floresta(m1);
						
						if(vitoria2){
							m1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << m1.fase << std::endl;
							arquivo << "classe: " << "Mago" << std::endl;
					    	arquivo << "vida: " << m1.vida << std::endl;
					    	arquivo.close();
							bool vitoria3 = Castelo(m1);
							
							if(vitoria3){
								m1.fase +=1;
								std::ofstream arquivo("save/save.txt");
								arquivo << "fase: " << m1.fase << std::endl;
								arquivo << "classe: " << "Mago" << std::endl;
						    	arquivo << "vida: " << m1.vida << std::endl;
								arquivo.close();
								bool bossFight = PalacioReal(m1);
								exit(0);
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
			
	        std::cout << "\nCarregando jogo salvo..." << std::endl;

		    std::ifstream dados("save/save.txt");
		
		    int fase, vida, pocoes;
			std::string classe; 
		    std::string linha;
		
		    // Lendo as linhas do arquivo
		    while (std::getline(dados, linha)) {
		        std::stringstream ss(linha);
		        std::string chave;
		
		        // Lê "fase:", "vida:", ou "pocoes:" e o valor correspondente
		        if (linha.find("fase") != std::string::npos) {
		            ss >> chave >> fase;
		        } else if (linha.find("vida") != std::string::npos) {
		            ss >> chave >> vida;
		        } else if (linha.find("pocoes") != std::string::npos) {
		            ss >> chave >> pocoes;
		        } else if (linha.find("classe:") != std::string::npos) {
		            ss >> chave >> classe;
		        }
		    }
		
		    // Fechando o arquivo
		    //dados.close();
		
			if(classe=="Barbaro"){
				Barbaro b1;
				if(fase == 1){
					bool vitoria1 = Caverna(b1);
		        	
		        	if(vitoria1){
		        		b1.fase +=1;
		        		std::ofstream arquivo("save/save.txt");
		        		arquivo << "fase: " << b1.fase << std::endl;
		        		arquivo << "classe: " << "Barbaro" << std::endl;
				    	arquivo << "vida: " << b1.vida << std::endl;
				    	arquivo.close();
		        		
						bool vitoria2 = Floresta(b1);
						
						if(vitoria2){
							b1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << b1.fase << std::endl;
							arquivo << "classe: " << "Barbaro" << std::endl;
				    		arquivo << "vida: " << b1.vida << std::endl;
				    		arquivo.close();
				    		
							bool vitoria3 = Castelo(b1);
							
							if(vitoria3){
								b1.fase +=1;
								std::ofstream arquivo("save/save.txt");
								arquivo << "fase: " << b1.fase << std::endl;
								arquivo << "classe: " << "Barbaro" << std::endl;
				    			arquivo << "vida: " << b1.vida << std::endl;
				    			arquivo.close();
				    			
								bool bossFight = PalacioReal(b1);
								exit(0);
							}
						}
					}
				} else if(fase==2){
					b1.vida = vida;
					b1.fase = fase;
					bool vitoria2 = Floresta(b1);
						
					if(vitoria2){
						b1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << b1.fase << std::endl;
						arquivo << "classe: " << "Barbaro" << std::endl;
			    		arquivo << "vida: " << b1.vida << std::endl;
			    		arquivo.close();
			    		
						bool vitoria3 = Castelo(b1);
						
						if(vitoria3){
							b1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << b1.fase << std::endl;
							arquivo << "classe: " << "Barbaro" << std::endl;
			    			arquivo << "vida: " << b1.vida << std::endl;
			    			arquivo.close();
			    			
							bool bossFight = PalacioReal(b1);
							exit(0);
						}
					}
				} else if(fase==3){
					b1.vida = vida;
					b1.fase = fase;
					bool vitoria3 = Castelo(b1);
						
					if(vitoria3){
						b1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << b1.fase << std::endl;
						arquivo << "classe: " << "Barbaro" << std::endl;
		    			arquivo << "vida: " << b1.vida << std::endl;
		    			arquivo.close();
		    			
						bool bossFight = PalacioReal(b1);
						exit(0);
						
					}
				} else if(fase==4){
					b1.vida = vida;
					b1.fase = fase;
					bool bossFight = PalacioReal(b1);
					exit(0);
				}
			}
			
			if(classe=="Arqueira")
			{
				Arqueira a1;
				if(fase == 1){
					bool vitoria1 = Caverna(a1);
		        	
		        	if(vitoria1){
		        		a1.fase +=1;
		        		std::ofstream arquivo("save/save.txt");
		        		arquivo << "fase: " << a1.fase << std::endl;
		        		arquivo << "classe: " << "Arqueira" << std::endl;
				    	arquivo << "vida: " << a1.vida << std::endl;
				    	arquivo.close();
		        		
						bool vitoria2 = Floresta(a1);
						
						if(vitoria2){
							a1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << a1.fase << std::endl;
							arquivo << "classe: " << "Arqueira" << std::endl;
				    		arquivo << "vida: " << a1.vida << std::endl;
				    		arquivo.close();
				    		
							bool vitoria3 = Castelo(a1);
							
							if(vitoria3){
								a1.fase +=1;
								std::ofstream arquivo("save/save.txt");
								arquivo << "fase: " << a1.fase << std::endl;
								arquivo << "classe: " << "Arqueira" << std::endl;
				    			arquivo << "vida: " << a1.vida << std::endl;
				    			arquivo.close();
				    			
								bool bossFight = PalacioReal(a1);
								exit(0);
							}
						}
					}
				} else if(fase==2){
					a1.vida = vida;
					a1.fase = fase;
					bool vitoria2 = Floresta(a1);
						
					if(vitoria2){
						a1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << a1.fase << std::endl;
						arquivo << "classe: " << "Arqueira" << std::endl;
			    		arquivo << "vida: " << a1.vida << std::endl;
			    		arquivo.close();
			    		
						bool vitoria3 = Castelo(a1);
						
						if(vitoria3){
							a1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << a1.fase << std::endl;
							arquivo << "classe: " << "Arqueira" << std::endl;
			    			arquivo << "vida: " << a1.vida << std::endl;
			    			arquivo.close();
			    			
							bool bossFight = PalacioReal(a1);
							exit(0);
						}
					}
				} else if(fase==3){
					a1.vida = vida;
					a1.fase = fase;
					bool vitoria3 = Castelo(a1);
						
					if(vitoria3){
						a1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << a1.fase << std::endl;
						arquivo << "classe: " << "Arqueira" << std::endl;
		    			arquivo << "vida: " << a1.vida << std::endl;
		    			arquivo.close();
		    			
						bool bossFight = PalacioReal(a1);
						exit(0);
					}
				} else if(fase==4){
					a1.vida = vida;
					a1.fase = fase;
					bool bossFight = PalacioReal(a1);
					exit(0);
				}
			}
			
			if(classe=="Mago"){
				Mago m1;
				if(fase == 1){
					bool vitoria1 = Caverna(m1);
		        	
		        	if(vitoria1){
		        		m1.fase +=1;
		        		std::ofstream arquivo("save/save.txt");
		        		arquivo << "fase: " << m1.fase << std::endl;
		        		arquivo << "classe: " << "Mago" << std::endl;
				    	arquivo << "vida: " << m1.vida << std::endl;
				    	arquivo.close();
		        		
						bool vitoria2 = Floresta(m1);
						
						if(vitoria2){
							m1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << m1.fase << std::endl;
							arquivo << "classe: " << "Mago" << std::endl;
				    		arquivo << "vida: " << m1.vida << std::endl;
				    		arquivo.close();
				    		
							bool vitoria3 = Castelo(m1);
							
							if(vitoria3){
								m1.fase +=1;
								std::ofstream arquivo("save/save.txt");
								arquivo << "fase: " << m1.fase << std::endl;
								arquivo << "classe: " << "Mago" << std::endl;
				    			arquivo << "vida: " << m1.vida << std::endl;
				    			arquivo.close();
				    			
								bool bossFight = PalacioReal(m1);
								exit(0);
							}
						}
					}
				} else if(fase==2){
					m1.vida = vida;
					m1.fase = fase;
					bool vitoria2 = Floresta(m1);
						
					if(vitoria2){
						m1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << m1.fase << std::endl;
						arquivo << "classe: " << "Mago" << std::endl;
			    		arquivo << "vida: " << m1.vida << std::endl;
			    		arquivo.close();
			    		
						bool vitoria3 = Castelo(m1);
						
						if(vitoria3){
							m1.fase +=1;
							std::ofstream arquivo("save/save.txt");
							arquivo << "fase: " << m1.fase << std::endl;
							arquivo << "classe: " << "Mago" << std::endl;
			    			arquivo << "vida: " << m1.vida << std::endl;
			    			arquivo.close();
			    			
							bool bossFight = PalacioReal(m1);
							exit(0);
						}
					}
				} else if(fase==3){
					m1.vida = vida;
					m1.fase = fase;
					bool vitoria3 = Castelo(m1);
						
					if(vitoria3){
						m1.fase +=1;
						std::ofstream arquivo("save/save.txt");
						arquivo << "fase: " << m1.fase << std::endl;
						arquivo << "classe: " << "Mago" << std::endl;
		    			arquivo << "vida: " << m1.vida << std::endl;
		    			arquivo.close();
		    			
						bool bossFight = PalacioReal(m1);
						exit(0);
					}
				} else if(fase==4){
					m1.vida = vida;
					m1.fase = fase;
					bool bossFight = PalacioReal(m1);
					exit(0);
				}
			}
    	}
	    
		else if (opcao == 3) {
	        exit(0);
	    
		} else {
	        std::cout << "Opcao invalida." << std::endl;
	    }
	}
	return 0;
}