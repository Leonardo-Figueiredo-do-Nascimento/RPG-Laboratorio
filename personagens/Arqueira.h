#ifndef ARQUEIRA_H
#define ARQUEIRA_H

#include "Protagonista.h"
#include <string>
#include <iostream>

struct Arqueira : public Protagonista {
    Arqueira (){
    	vida = 70;            // Vida inicial
        vidaMax = 70;         // Vida máxima
        danoAtq = 22;          // Dano de ataque
        classe = "Arqueira ";  // Nome da classe
        pocoesCura[0] = 1; // Poção disponível
        pocoesCura[1] = 1; // Poção indisponível
        pocoesCura[2] = 0; // Poção indisponível
    }

    void contarHistoria(){
        std::cout<<"\nConhecida como a arqueira seu nome verdadeiro eh Blue. Veio de uma aldeia no reino selvagem."<<  
				   "\nSua familia era pobre seu sustento era inteiramente da caça. Seu pai a ensinou a usar o arco e flechas para caçar e quando seu pai morreu Blue teve que assumir o papel de irma mais velha e sustentar a familia."<<
				   "\nDepois de alguns anos caçando e vendendo suas presas ela ficou conhecida com a arqueira que nunca erra entra as pessoas de sua aldeia."<<
				   "\nEm um dia de caça ela retornou para a aldeia, mas tudo estava destruido e todos estavam mortos. Quando chegou em casa encontrou sua familia morta. Depois disso ela jurou vingança contra o exercito das travas, com o tempo foi aprimorando suas habilidades e adquirindo novas.";
    };

};

#endif