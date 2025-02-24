#include <iostream>


int main() {
    std::cout << "Insira seu número para saber se impar ou par: \n";

    int num;

    std::cin >> num;

    if (num % 2 == 0) {
        std::cout <<"Número PAR";
    } else {
        std::cout <<"Número ÍMPAR";
    }

    return 0;
}