#include <iostream>

int main () {
    double num1;
    double num2;
    char operacao;

    std::cout << "Digite sua conta seguindo o exemplo (1 + 2): ";
    std::cin >> num1 >> operacao >> num2;

    double result;

    if (operacao == '+') {
        result = num1 + num2;
        std::cout << "Resultado: " << result;
    } else if (operacao == '-') {
        result = num1 - num2;
        std::cout << "Resultado: " << result;
    } else if (operacao == '*') {
        result = num1 * num2;
        std::cout << "Resultado: " << result;
    } else if (operacao == '/') {
        result = num1 / num2;
        std::cout << "Resultado: " << result;
    } else {
        std::cout << "Operação incorreta.\n";
    }

    return 0;
}