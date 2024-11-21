#ifndef ARQUEIRA_H
#define ARQUEIRA_H


#include "Protagonista.h"
#include "Goblin.h"
#include "CavaleiroNegro.h"
#include "ReiFeiticeiro.h"
#include <string>
#include <iostream>

struct Arqueira : public Protagonista {
    Arqueira (){
    vida = 100;            // Vida inicial
        vidaMax = 70;         // Vida máxima
        danoAtq = 25;          // Dano de ataque
        classe = "Arqueira ";  // Nome da classe
        pocoesCura[0] = 1; // Poção disponível
        pocoesCura[1] = 1; // Poção indisponível
        pocoesCura[2] = 0; // Poção indisponível
    }

    void ataqueDeFlecha(Goblin g){
    	g.vida -= 25;
        std::cout<<"\nSeu ataque causou 25 de dano\n";
    };
    void ataqueDeFlecha(CavaleiroNegro c){
    	c.vida -= 25;	
        std::cout<<"\nSeu ataque causou 25 de dano\n";
    };

	void ataqueDeFlecha(ReiFeiticeiro r){
    	r.vida -= 25;
        std::cout<<"\nSeu ataque causou 25 de dano\n";
    }

    void contarHistoria(){
        std::cout<<"Conhecida como a arqueira seu nome verdadeiro é Blue. Veio de uma aldeia no reino selvagem."<<  
				   "\nSua família era pobre seu sustento era inteiramente da caça. Seu pai a ensinou a usar o arco e flechas para caçar e quando seu pai morreu Blue teve que assumir o papel de irmã mais velha e sustentar a família."<<
				   "\nDepois de alguns anos caçando e vendendo suas presas ela ficou conhecida com a arqueira que nunca erra entra as pessoas de sua aldeia."<<
				   "\nEm um dia de caça ela retornou para a aldeia, mas tudo estava destruído e todos estavam mortos. Quando chegou em casa encontrou sua família morta. Depois disso ela jurou vingança contra o exército das travas, com o tempo foi aprimorando suas habilidades e adquirindo novas.";
    };

};

#endif