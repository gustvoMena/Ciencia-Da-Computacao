#include <iostream>
using namespace std;

#define MAX_LINHA 3
#define MAX_COLUNA 10

// Preenche a matriz A com números reais
void preencherMatriz(float matrizA[][MAX_COLUNA], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << "Digite o termo a" << i + 1 << j + 1 << ": ";
            cin >> matrizA[i][j];
        }
    }
}

// Gera a matriz B como a transposta de A (dimensões invertidas: coluna x linha)
void gerarTransposta(const float matrizA[][MAX_COLUNA], float matrizB[][MAX_LINHA], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matrizB[j][i] = matrizA[i][j];
        }
    }
}

// Exibe a matriz A (linhas x colunas)
void mostrarMatrizA(const float matrizA[][MAX_COLUNA], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << "[" << matrizA[i][j] << "]\t";
        }
        cout << "\n";
    }
}

// Exibe a matriz B (colunas x linhas)
void mostrarMatrizB(const float matrizB[][MAX_LINHA], int coluna, int linha) {
    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            cout << "[" << matrizB[i][j] << "]\t";
        }
        cout << "\n";
    }
}

int main() {
    float matrizA[MAX_LINHA][MAX_COLUNA];
    float matrizB[MAX_COLUNA][MAX_LINHA];
    int linha, coluna;

    // Validação das dimensões da matriz A
    do {
        cout << "Digite a quantidade de linhas (2 a 3): ";
        cin >> linha;

        cout << "Digite a quantidade de colunas (4 a 10): ";
        cin >> coluna;
    } while (linha < 2 || linha > 3 || coluna < 4 || coluna > 10);

    preencherMatriz(matrizA, linha, coluna);

    cout << "\nMatriz A (" << linha << "x" << coluna << "):\n";
    mostrarMatrizA(matrizA, linha, coluna);

    // Gera e armazena o resultado na matriz B
    gerarTransposta(matrizA, matrizB, linha, coluna);

    cout << "\nMatriz B Transposta (" << coluna << "x" << linha << "):\n";
    mostrarMatrizB(matrizB, coluna, linha);

    return 0;
}