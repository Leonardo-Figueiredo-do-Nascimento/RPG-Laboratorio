#ifndef BARBARO_H
#define BARBARO_H


#include "Protagonista.h"
#include "Goblin.h"
#include "CavaleiroNegro.h"
#include "ReiFeiticeiro.h"
#include <string>
#include <iostream>

struct Barbaro : public Protagonista {
    Barbaro(){
   		vida = 100;            // Vida inicial
        vidaMax = 100;         // Vida máxima
        danoAtq = 20;          // Dano de ataque
        classe = "Barbaro";  // Nome da classe
        pocoesCura[0] = 1; // Poção disponível
        pocoesCura[1] = 0; // Poção indisponível
        pocoesCura[2] = 0; // Poção indisponível
    }

    void ataqueDeClava(Goblin g){
    	g.vida -= 20;
        std::cout<<"seu ataque causou 20 de dano\n";
    };
    void ataqueDeClava(CavaleiroNegro c){
    	c.vida -= 20;
        std::cout<<"seu ataque causou 20 de dano\n";
    };
    void ataqueDeClava(ReiFeiticeiro r){
    	r.vida -= 20;
        std::cout<<"seu ataque causou 20 de dano"<<endl;
    }

    void contarHistoria(){
        std::cout<<"Ragnar, um bárbaro das terras do Norte, teve um sonho enigmático sobre o Olho de Skarn, um artefato lendário que controlava o destino das terras selvagens. Determinado, ele enfrentou perigos mortais — feras, trolls e frio implacável — até chegar ao templo onde o artefato estava guardado. Lá, superou o enigma de uma esfinge e enfrentou o espírito de um antigo guerreiro em combate. No momento decisivo, Ragnar provou sua honra ao abdicar da violência, demonstrando que sua busca era pelo bem de seu povo. Ele conquistou o Olho de Skarn e retornou como líder, trazendo prosperidade e deixando um legado de coragem e sabedoria.\n";
    };

};

#endif