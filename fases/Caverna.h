#ifndef CAVERNA_H
#define CAVERNA_H


#include "../personagens/Goblin.h"
#include "../personagens/Protagonista.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool Caverna(Protagonista& prota) {
    
	cout<<"Voce esta na caverna";
	
    vector<Goblin> goblins = {Goblin(), Goblin(), Goblin()};
    
    cout<<"3 goblins apareceram";

    
    while (!goblins.empty()) {

        
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