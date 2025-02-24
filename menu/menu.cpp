#include <iostream>
using namespace std;

int main () {
    int menu;

    while (true) {
        cout << "MENU\n";
        cout << "1. Play\n"; 
        cout << "2. Continue\n"; 
        cout << "3. Options\n"; 
        cout << "4. Exit\n";
        
        cout << "Digite uma opção: ";
        cin >> menu;
        cout << "\n";
        
        if (menu == 1) {
            int play;

            while (true) {
                cout << "1. Carrera\n";
                cout << "2. Partida Rápida\n";
                cout << "3. Modo Família\n";
                cout << "4. Voltar\n";

                cout << "Digite uma opção: ";
                cin >> play;
                cout << "\n";

                if (play == 1) {
                    cout << "Carrera: Encare uma competição completa, avançando por diferentes pistas e desafios para conquistar o primeiro lugar. Supere adversários, desbloqueie melhorias e prove suas habilidades na pista.\n";
                } else if (play == 2) {
                    cout << "Partida Rápida: Pule direto para a ação! Escolha seu veículo e pista favoritos para uma corrida instantânea, sem precisar avançar por campeonatos ou desafios. Ideal para quem busca diversão rápida e intensa.\n";
                } else if (play == 3) {
                    cout << "Modo Família: Perfeito para jogar com amigos e familiares! Corridas mais equilibradas, controles acessíveis e itens especiais tornam a experiência divertida para jogadores de todas as idades.\n";
                } else if (play == 4) {
                    break;
                } else {
                    return 1;
                }
            }
        } else if (menu == 2) {
            int continue1;
            
            while (true) {
                cout << "1. Checkpoint\n";
                cout << "2. Início da fase\n";
                cout << "3. Voltar\n";

                cout << "Digite uma opção: ";
                cin >> continue1;
                cout << "\n";

                if (continue1 == 1) {
                    cout << "Checkpoint: Pontos de controle ao longo do percurso que devem ser alcançados dentro do tempo limite. Cada checkpoint conquistado adiciona tempo extra, mantendo você na corrida e desafiando sua velocidade e precisão.\n";
                } else if (continue1 == 2) {
                    cout << "Início da Partida: O momento crucial onde a largada define sua vantagem! Acelere no tempo certo para um arranque perfeito e ganhe posição logo nos primeiros segundos da corrida.\n";
                } else if (continue1 == 3) {
                    break;
                } else {
                    return 1;
                }
            }
        } else if (menu == 3) {
            int options;

            while (true)
            {
                cout << "1. Volume\n";
                cout << "2. Musicas\n";
                cout << "3. Idioma\n";
                cout << "4. Voltar\n";

                cout << "Digite uma opção: ";
                cin >> options;
                cout << "\n";

                if (options == 1) {
                    cout << "Volume: Ajuste o nível do som para uma experiência imersiva. Controle o volume dos efeitos, da trilha sonora e das vozes para personalizar o áudio do jogo ao seu gosto.\n";
                } else if (options == 2) {
                    cout << "Músicas: Escolha a trilha sonora perfeita para acompanhar suas corridas! Desde batidas eletrizantes até temas clássicos, a seleção de músicas ajuda a criar a atmosfera ideal para cada partida.\n";
                } else if (options == 3) {
                    cout << "Idioma: Personalize o jogo no seu idioma preferido para uma experiência mais acessível. Alterne entre diferentes idiomas para menus, legendas e narrações conforme sua preferência.\n";
                } else if (options == 4) {
                    break;
                } else {
                    return 1;
                }
            }
            
        } else if (menu == 4) {
            cout << "4. Exit\n";
            break;
        } else {
            cout << "ERRO: unknown option\n";
        }
    }

    return 0;

}