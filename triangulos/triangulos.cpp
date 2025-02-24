#include <iostream>

int main () {
    int l1;//Lado 1 do triângulo
    int l2;//Lado 2 do triângulo
    int l3;//Lado 3 do triângulo

    std::cout << "Insira os números dos 3 lados do seu triângulo: ";
    std::cin >> l1 >> l2 >> l3;


    if ( (l1 == l2) && (l1 == l3) && (l2 == l3) ) {
        std::cout << "Isso é um triângulo Equilátero.\n";
    } else if ( (l1 == l2) || (l1 == l3) || (l2 == l3) ) {
        std::cout << "Isso é um triângulo Isósceles.\n";
    } else if ( (l1 != l2) && (l1 != l3) && (l2 != l3) ) {
        std::cout << "Isso é um triângulo Escaleno.\n";
    } else {
        return 1;
    }

    return 0;
}