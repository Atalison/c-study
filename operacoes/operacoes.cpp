#include <iostream>

int main () {
    double num1;
    double num2;
    double result1;

    std::cout << "Insira os dois números: ";
    std::cin >> num1 >> num2;

    result1 = num1 + num2;
    std::cout << num1 << "+" << num2 << "=" << result1 << " \n";

    result1 = num1 - num2;
    std::cout << num1 << "-" << num2 << "=" << result1 << " \n";

    result1 = num1 * num2;
    std::cout << num1 << "*" << num2 << "=" << result1 << " \n";

    result1 = num1 / num2;
    std::cout << num1 << "/" << num2 << "=" << result1 << " \n";

    return 0;
}