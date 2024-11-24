#ifndef BARBARO_H
#define BARBARO_H


#include "Protagonista.h"
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

    void contarHistoria(){
        std::cout<<"\nRagnar, um barbaro das terras do Norte, teve um sonho enigmatico sobre o Olho de Skarn, um artefato lendario que controlava o destino das terras selvagens. Determinado, ele enfrentou perigos mortais — feras, trolls e frio implacavel — ate chegar ao templo onde o artefato estava guardado. La, superou o enigma de uma esfinge e enfrentou o espirito de um antigo guerreiro em combate. No momento decisivo, Ragnar provou sua honra ao abdicar da violencia, demonstrando que sua busca era pelo bem de seu povo. Ele conquistou o Olho de Skarn e retornou como lider, trazendo prosperidade e deixando um legado de coragem e sabedoria.\n";
    };

};

#endif