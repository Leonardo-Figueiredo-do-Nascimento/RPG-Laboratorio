#ifndef PROTAGONISTA_H
#define PROTAGONISTA_H

#include <string>
#include <iostream>

struct Protagonista {
    int vida;
    int vidaMax;
    int danoAtq;
    std::string classe;
    int fase = 1;
	int pocoesCura[3] = {1, 0, 0}; // Inicializa com 1 poção, se adicionar uma poção, o 0 vira 1

    void usarPocao() {
        // Loop para verificar alguma poção disponível
        for (int i = 0; i < 3; i++) {
            if (pocoesCura[i] == 1) { // Tem uma poção?
                vida += 40; // Cura 
                if (vida > vidaMax) {
                    vida = vidaMax; // Não ultrapassa a vida máxima
                }
                pocoesCura[i] = 0; // Atualiza a bolsa poções 
                std::cout << "\nVoce usou uma pocao de cura! Vida atual: " << vida << std::endl;
                return;
            }
        }
        std::cout << "\nVoce nao tem mais pocoes de cura disponiveis!" << std::endl;
    }
    
    int getNumeroPocoes(){
        int quantidadePocoes = 0;
        for (int i = 0; i < 3; i++) {
            if (pocoesCura[i] == 1) {
                quantidadePocoes++;
            }
        }
        return quantidadePocoes;
    }
};

#endif