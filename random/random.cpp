#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main () {
    srand(time(0));
    int numeroSecreto = rand() % 10 + 1;
    
    cout << "Tente advinhar um núemro de entre 1 e 10: ";

    int palpite;

    while (true) {
        cin >> palpite;

        if (palpite > numeroSecreto) {
            cout << "Muito alto";
        } else if (palpite < numeroSecreto) {
            cout << "Muito baixo";
        } else {
            cout << "Parabéns, você acertou!!!";
            break;
        }
    }

    return 0;
}