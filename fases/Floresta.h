#ifndef FLORESTA_H
#define FLORESTA_H

#include "../personagens/Monstro.h"
#include "../personagens/Protagonista.h"
#include "../personagens/Goblin.h"
#include "../personagens/CavaleiroNegro.h"
#include <iostream>
#include <fstream>

using namespace std;

bool Floresta(Protagonista& prota) {
	
	cout<<"\n-------------------------------"<<endl;
	
    cout<<"\nVoce esta na floresta"<<endl;
    
    vector<Goblin> goblins = {Goblin(), Goblin()};
    vector<CavaleiroNegro> cavaleiros = {CavaleiroNegro()};
    
    cout<<"\n2 goblins e 1 cavaleiro negro apareceram!!!"<<endl;
    
    while (!cavaleiros.empty() || !goblins.empty()) { // Continue enquanto houver inimigos
        int jogada;
        cout << "\nVida: " << prota.vida << "          Pocoes de cura:" << prota.getNumeroPocoes() << endl;
        cout << "[1] Atacar     [2] Curar" << endl;
        cin >> jogada;

        if (jogada == 1) {
            if (!goblins.empty()) {	
                // Atacar Goblin
                Goblin& alvo = goblins.front();
                int dano = prota.danoAtq;
                alvo.vida -= dano;

                cout << "Voce causou " << dano << " de dano ao primeiro Goblin!" << endl;

                if (alvo.vida <= 0) {
                    cout << "Goblin foi derrotado!" << endl;
                    goblins.erase(goblins.begin());
                }
            }
            else if (!cavaleiros.empty()) {
                // Atacar Cavaleiro Negro
                CavaleiroNegro& alvo = cavaleiros.front();
                int dano = prota.danoAtq;
                alvo.vida -= dano;

                cout << "Voce causou " << dano << " de dano ao Cavaleiro Negro!" << endl;

                if (alvo.vida <= 0) {
                    cout << "Cavaleiro Negro foi derrotado!" << endl;
                    cavaleiros.erase(cavaleiros.begin());
                }
            }  
		} else if(jogada==2){
			prota.usarPocao();
		}
        
        // Ataque dos Goblins
        for (size_t i = 0; i < goblins.size(); ++i) {
            int dano = goblins[i].ataqueFacada();
            prota.vida -= dano;
        }
        
        // Ataque dos cavaleiros
        for (size_t i = 0; i < cavaleiros.size(); ++i) {
            int dano = cavaleiros[i].ataqueEspadaNegra();
            prota.vida -= dano;
        }
        
		if (prota.vida <= 0) {
            std::cout << "Voce foi derrotado!\n";
            return false;
        }
    }

    cout << "\nParabens! Voce derrotou todos os inimigos na floresta!" << endl;
    return true;
}

#endif