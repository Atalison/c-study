#include <iostream>
using namespace std;

int main () {
    int pontuacao;
    int cartao;
    int tipo;

    while (true) {
        cout << "1. Debitar\n";
        cout << "2. Cretitar\n";
        cout << "3. Sair\n";

        cin >> tipo;

        if (tipo == 1)  {

            cout << "Digite o valor: \n";
            cin >> pontuacao;
            cartao = cartao - pontuacao;
            
            cout << "Seu cartão está com " << cartao << " pontos.\n";

        } else if (tipo == 2) {

            cout << "Digite o valor: \n";
            cin >> pontuacao;
            cartao = pontuacao + cartao;

            cout << "Seu cartão está com " << cartao << " pontos.\n";

        } else if (tipo == 3) {
            break;
        } else {
            return 0;
        }
    }

    
}