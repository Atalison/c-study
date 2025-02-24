#include <iostream>

int main () {
    int idade;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 18) {
        std::cout << "Você é maior de idade.\n";
    } else if (idade <= 17) {
        std::cout << "Você ainda é menor de idade.\n";
    } else {
        return 1;
    }

    return 0;
}