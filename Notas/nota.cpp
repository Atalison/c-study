#include <iostream>

int main () {
    int Nota; //Nota que será inserida

    std::cout << "Insira a nota: \n";
    std::cin >> Nota; 

    if (Nota >= 0 && Nota <= 49) {
        std::cout <<"Classificação: D";
    } else if (Nota >= 50 && Nota <= 69) {
        std::cout <<"Classificação: C";
    } else if (Nota >= 70 && Nota <= 89) {
        std::cout <<"Classificação: B";
    } else if (Nota >= 90 && Nota <= 100) {
        std::cout <<"Classificação: A";
    } else {
        return 1;
    }

    return 0;
}