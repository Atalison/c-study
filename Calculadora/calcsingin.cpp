#include <iostream>
#include <string>

int main () {
    std::string login_reg = "Atalison"; // Login registrado
    std::string senha_reg = "1234ab"; // Senha registrada

    std::string login_us;
    std::string senha_us;

    std::cout << "FAZER LOGIN\n" << "Login: ";
    std::cin >> login_us;
    std::cout << "\n";
    std::cout << "Senha: ";
    std::cin >> senha_us;
    std::cout << "\n";

    if (login_us == login_reg && senha_us == senha_reg) {
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
    
    } else {
        std::cout << "Login Incorreto";
    }
}