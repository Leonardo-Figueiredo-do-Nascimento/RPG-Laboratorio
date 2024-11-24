#ifndef CASTELO_H
#define CASTELO_H

#include "../personagens/CavaleiroNegro.h"
#include "../personagens/Protagonista.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool Castelo(Protagonista& prota) {
	
    cout<<"\n-------------------------------"<<endl;
    cout<<"\nVoce esta no castelo"<<endl;
    vector<CavaleiroNegro> cavaleiros = {CavaleiroNegro(), CavaleiroNegro()};
    cout<<"\n2 cavaleiros negros apareceram!!!"<<endl;
    
    while (!cavaleiros.empty()) {
		int jogada;
		cout<< "\nVida: "<<prota.vida<<"          Pocoes de cura:"<<prota.getNumeroPocoes()<<endl;
		cout<< "[1] Atacar     [2]Curar"<<endl;
		cout<<"->";
		cin>>jogada;
		
		if(jogada==1){
			CavaleiroNegro& alvo = cavaleiros.front(); 
            int dano = prota.danoAtq;     
            alvo.vida -= dano;

            cout << "\nVoce causou " << dano << " de dano ao primeiro cavaleiro!" << endl;

            // Verificar se o Goblin foi derrotado
            if (alvo.vida <= 0) {
                cout << "Cavaleiro Negro foi derrotado!" << endl;
                cavaleiros.erase(cavaleiros.begin()); // Remover o primeiro Goblin do vetor
            }
		}else if(jogada==2){
			prota.usarPocao();
		}
        
        // Ataque dos Goblins
        for (size_t i = 0; i < cavaleiros.size(); ++i) {
            int dano = cavaleiros[i].ataqueEspadaNegra();
            prota.vida -= dano;
        }
        
		if (prota.vida <= 0) {
            std::cout << "Voce foi derrotado!\n";
            return false;
        }
    }

    cout << "\nParabens! Voce derrotou todos os Cavaleiros Negros na caverna!" << endl;
    return true;
}

#endif