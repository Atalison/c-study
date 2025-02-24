#include <iostream>

int main () {
    int bt1 = 1;
    int bt2 = 2;
    int bt3 = 3;
    int bt4 = 4;


    int num;

    std::cin >> num;
    if (num == bt1) {
        std::cout << "LED VERMELHO";
    } else if (num == bt2) {
        std::cout << "LED AMARELO";
    } else if (num == bt3) {
        std::cout << "LED AZUL";
    } else if (num == bt4) {
        std::cout << "LED BRANCO";
    } else {
        std::cout << "NINGUÉM APERTOU";
    }

    return 0;
}