#include <iostream>
using namespace std;

int main () {
    int num;
    int soma = 0;

    
    cout << "SOMA DOS NÚMEROS" <<endl;
    cout << "Digite o número que você quer somar: " <<endl;
    cout << "Para sair digite um número negativo.\n";
    

    while (true) {
        
        cin >> num;

        if (num < 0) {
            break;
        }

        soma += num;

    }
    
    cout << "O resultado é: " << soma << endl;

    return 0;
}