#include <iostream>

int main () {
    int num = 2;

    std::cout << "Tente adivinhar um número de 1 a 10: \n";
    std::cin >> num;

    if (num <= 1) {
        while (num <= 1) {
                std::cout << "Muito baixo.\n";
            } else if (num >= 3) {
                std::cout << "Muito alto.\n";
        }
    }
    else {
        std::cout << "Você acertou!";
    }

    return 0;
}