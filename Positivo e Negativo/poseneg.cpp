#include <iostream>

int main () {
    double num1;

    std::cout << "Insira um número para saber se é positivo ou negativo: \n";

    std::cin >> num1;

    if (num1 >= 1) {
        std::cout << "Número Positivo";
    } else if (num1 == 0) {
        std::cout << "Número zero";
    } else if (num1 <= -1) {
        std::cout << "Número negativo";
    } else {
        std::cout << "Número desconhecido";
    }

    return 0;
}