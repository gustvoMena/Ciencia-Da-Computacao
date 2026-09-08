#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// 1. Função para limpar a tela
void limparTela() {
    for(int i = 0; i < 50; i++) cout << "\n";
}

// 2. Função para preparar o jogo (embaralhar e preencher)
void inicializarJogo(char tabuleiro[4][4], bool revelado[4][4]) {
    char cartas[16] = {'A','A', 'B','B', 'C','C', 'D','D', 
                       'E','E', 'F','F', 'G','G', 'H','H'};
    srand(time(0));

    // Embaralhar
    for (int i = 0; i < 16; i++) {
        int pos = rand() % 16;
        char temp = cartas[i];
        cartas[i] = cartas[pos];
        cartas[pos] = temp;
    }

    // Preencher a matriz
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            tabuleiro[i][j] = cartas[index];
            revelado[i][j] = false;
            index++;
        }
    }
}

// 3. Função para desenhar o tabuleiro na tela
void desenharTabuleiro(char tabuleiro[4][4], bool revelado[4][4]) {
    cout << "    0 1 2 3\n";
    cout << "  ---------\n";
    for (int i = 0; i < 4; i++) {
        cout << i << " | ";
        for (int j = 0; j < 4; j++) {
            if (revelado[i][j] == true) {
                cout << tabuleiro[i][j] << " ";
            } else {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
}

// 4. Função para pedir e validar a jogada
// O uso do '&' significa "Passagem por Referência", ou seja, 
// a função altera a variável original que está na main.
void pedirCoordenadas(int &linha, int &coluna, bool revelado[4][4], string qualCarta) {
    while (true) {
        cout << "Escolha a " << qualCarta << " carta (linha depois coluna): ";
        cin >> linha >> coluna;

        if (linha < 0 || linha > 3 || coluna < 0 || coluna > 3) {
            cout << "ERRO: Posicao nao existe! Digite numeros de 0 a 3.\n";
        } else if (revelado[linha][coluna] == true) {
            cout << "ERRO: Esta carta ja esta virada! Escolha outra.\n";
        } else {
            break; // A entrada é válida, sai do loop
        }
    }
}

// ==========================================
// FUNÇÃO PRINCIPAL
// ==========================================
int main() {
    char tabuleiro[4][4];
    bool revelado[4][4];

    // Chama a função para preparar o jogo
    inicializarJogo(tabuleiro, revelado);

    int paresEncontrados = 0;
    int tentativas = 0;
    string pausa;

    while (paresEncontrados < 8) {
        limparTela();
        cout << "--- JOGO DA MEMORIA ---\n";
        cout << "Pares encontrados: " << paresEncontrados << " de 8\n\n";

        desenharTabuleiro(tabuleiro, revelado);

        int l1, c1, l2, c2;

        // Pede a primeira carta
        pedirCoordenadas(l1, c1, revelado, "PRIMEIRA");
        revelado[l1][c1] = true;

        // Pede a segunda carta
        pedirCoordenadas(l2, c2, revelado, "SEGUNDA");
        revelado[l2][c2] = true;

        // Mostra como ficou com as duas cartas viradas
        limparTela();
        desenharTabuleiro(tabuleiro, revelado);
        tentativas++;

        // Verifica se acertou
        if (tabuleiro[l1][c1] == tabuleiro[l2][c2]) {
            cout << "ACERTOU! Voce formou um par.\n";
            paresEncontrados++;
        } else {
            cout << "ERROU! As cartas sao diferentes.\n";
            revelado[l1][c1] = false;
            revelado[l2][c2] = false;
        }

        cout << "Digite qualquer letra e aperte ENTER para continuar: ";
        cin >> pausa;
    }

    cout << "\n\nPARABENS! Voce venceu o jogo em " << tentativas << " tentativas!\n";

    return 0;
}