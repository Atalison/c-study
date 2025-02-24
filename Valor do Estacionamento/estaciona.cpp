#include <iostream>
#include <string>

int main () {
    std::string hora1 = "R$5,00"; //Até UMA hora no estacionamento
    std::string hora2 = "R$10,00"; // De UMA à 3 horas no estacionamento
    std::string hora3 = "R$15,00"; // De 3 à 6 horas no estacionamento
    std::string hora4 = "R$20,00"; // A partir de 6 horas no estacionamento

    double tempo;

    std::cout << "Quantas horas você ficou no estacionamento? ";
    std::cin >> tempo;

    if (tempo <= 0.59) {
        std::cout << "O valor cobrado é de: " << hora1; 
    } else if ((tempo >= 1) && (tempo <= 2.59)) {
        std::cout << "O valor cobrado é de: " << hora2;
    } else if ((tempo >= 3) && (tempo <= 5.59)) {
        std::cout << "O valor cobrado é de: " << hora3;
    } else if (tempo >= 6) {
        std::cout << "O valor cobrado é de: " << hora4;
    } else {
        std::cout << "ERRO";
    }

    return 0;

}