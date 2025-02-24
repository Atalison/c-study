#include <iostream>

int main () {
    int num1;
    int num2;

    int result;

    std::cout << "Insira o valor 1: ";
    std::cin >> num1;

    std::cout << "Insira o valor 2: ";
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << "O número maior é: " << num1;
    } else if (num1 < num2) { 
        std::cout << "O número maior é: " << num2;
    } else if (num1 == num2){
        std::cout << "Números iguais";
    } else {
        return 1;
    }

    return 0;
}
