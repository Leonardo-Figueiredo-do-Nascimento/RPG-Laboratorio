
#include <iostream>
#include <fstream>

int Menu() {
    int escolha;

    std::ifstream arquivo("save/save.txt");

    std::cout << "[1] Iniciar novo jogo" << std::endl;

    if (arquivo) {
        std::cout << "[2] Carregar jogo" << std::endl;
    }

    std::cout << "[3] Encerrar jogo" << std::endl;
    std::cout << "-> ";
    std::cin >> escolha;

    arquivo.close();

    return escolha;
}