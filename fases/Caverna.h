#ifndef CAVERNA_H
#define CAVERNA_H


#include "../personagens/Goblin.h"
#include "../personagens/Protagonista.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool Caverna(Protagonista& prota) {
    cout<<"\n-------------------------------"<<endl;
	cout<<"\nVoce esta na caverna"<<endl;
	
    vector<Goblin> goblins = {Goblin(), Goblin(), Goblin()};
    
    cout<<"\n3 goblins apareceram!!!\n";

    
    while (!goblins.empty()) {
		int jogada;
		cout<< "\nVida: "<<prota.vida<<"          Pocoes de cura:"<<prota.getNumeroPocoes()<<endl;
		cout<< "[1] Atacar     [2]Curar"<<endl;
		cin>>jogada;
		
		if(jogada==1){
			Goblin& alvo = goblins.front(); 
            int dano = prota.danoAtq;     
            alvo.vida -= dano;

            cout << "Voce causou " << dano << " de dano ao primeiro Goblin!" << endl;

            // Verifica se o Goblin foi derrotado
            if (alvo.vida <= 0) {
                cout << "Goblin foi derrotado!" << endl;
                goblins.erase(goblins.begin()); 
            }
		}else if(jogada==2){
			prota.usarPocao();
		}
        
        // Ataque dos Goblins
        for (size_t i = 0; i < goblins.size(); ++i) {
            int dano = goblins[i].ataqueFacada();
            prota.vida -= dano;
        }
        
		if (prota.vida <= 0) {
            std::cout << "Voce foi derrotado!\n";
            return false;
        }
    }

    cout << "\nParabens! Voce derrotou todos os Goblins na caverna!" << endl;
    return true;
}

#endif