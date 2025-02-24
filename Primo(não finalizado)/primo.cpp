#include <iostream>

int main () {
    int num;
    std::cout << "NÚMERO PRIMO\n" ;
    std::cout << "Escreva o número que você quer saber: ";
    std::cin >> num;

    if ( (num % 2) || (num / num == 0) (num == 2)) {
        std::cout << "O " << num << " é um número primo";
    } else {
        std::cout << "O " << num << " não é um número primo";
    }

    return 0;
}