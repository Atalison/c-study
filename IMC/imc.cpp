#include <iostream>

int main () {
    double imc;
    double peso;
    double altura;

    std::cout << "Para saber seu IMC insira seu PESO: \n";
    std::cin >> peso;
    std::cout << "Agora sua ALTURA: \n";
    std::cin >> altura;

    
    imc = peso / (altura * altura);

    if (imc <= 18.4) {
        std::cout << "IMC: " << imc << "\n" << "Abaixo do Peso\n";
    } else if (imc >=18.5 && imc <= 24.9) {
        std::cout << "IMC: " << imc << "\n"<< "Peso Normal\n";
    } else if (imc >=25.0 && imc <=29.9) {
        std::cout << "IMC: " << imc << "\n"<< "Sobrepeso\n";
    } else if (imc >= 30) {
        std::cout << "IMC: " << imc << "\n"<< "Obesidade\n";
    } else {
        std::cout << "Erro";
    }

    return 0;
}