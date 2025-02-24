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
        return 0;
    } else {
        std::cout << "Login Incorreto";
    }

    return 0;
}