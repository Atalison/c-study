#include <iostream>

int main() {
    double nota;

    std::cout << "Insira sua nota: ";
    std::cin >> nota;


    if (nota >= 6.0) {
        std::cout << "Aprovado";
    } else if (nota <= 5.9) {
        std::cout << "Reprovado";
    } else {
        return 1;
    }

    return 0;

}