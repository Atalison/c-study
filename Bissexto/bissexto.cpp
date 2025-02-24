#include <iostream>

int main () {
    int ano;

    std::cout << "Insira o ano para saber se é Bissexto: \n";
    std:: cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        std::cout << "É ano bissexto\n";
    } else {
        std::cout << "Não é ano bissexto\n";
    }

    return 0;
}