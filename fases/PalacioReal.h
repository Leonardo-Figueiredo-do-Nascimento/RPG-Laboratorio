#ifndef PALACIO_H
#define PALACIO_H

#include "../personagens/ReiFeiticeiro.h"
#include <iostream>
#include <fstream>

using namespace std;

bool PalacioReal(Protagonista& prota) {
	
	cout<<"\n-------------------------------"<<endl;
    cout<<"\nVoce esta na Palacio Real, derrote o Rei Feiticeiro!!!!!!!!!!!"<<endl;
    ReiFeiticeiro r;
    
    while (r.vida>0) {
		int jogada;
		cout<< "Vida: "<<prota.vida<<"          Pocoes de cura:"<<prota.getNumeroPocoes()<<endl;
		cout<< "[1] Atacar     [2]Curar"<<endl;
		cin>>jogada;
		
		if(jogada==1){ 
            int dano = prota.danoAtq;     
            r.vida -= dano;

            cout << "Voce causou " << dano << " de dano ao Rei Feiticeiro!" << endl;
            cout << "Vida restante do Rei Feiticeiro: " << r.vida <<endl;

            if (r.vida <= 0) {
                cout << "O Rei Feiticeiro foi derrotado!" << endl;
                break;
            }
		}else if(jogada==2){
			prota.usarPocao();
		}
        
        int dano = r.ataqueMagiaNegra();
        prota.vida -= dano;
        
		if (prota.vida <= 0) {
            cout << "\nVoce foi derrotado!\n";
            return false;
        }
    }

	cout<<"\n-------------------------------"<<endl;
    cout << "\nVoce venceu o jogo!!! Parabens!!!!"  << endl;
	cout<<"\n-------------------------------"<<endl;
    return true;
    
}

#endif