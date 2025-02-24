#include <iostream>

int main () {
    int num1;
    int num2;
    int num3;

    std::cout << "Insira os 3 números: ";
    std::cin >> num1 >> num2 >> num3;

    if ( (num1 > num2) && (num1 > num3) ) {
        std::cout << "O maior número é: " << num1;
    } else if ( (num2 > num1) && (num2 > num3) ) {
        std::cout << "O maior número é: " << num2;
    } else if ( (num3 > num2) && (num3 > num1)) {
        std::cout << "O maior número é: " << num3;
    } else {
        return 1;
    }

    return 0;
}