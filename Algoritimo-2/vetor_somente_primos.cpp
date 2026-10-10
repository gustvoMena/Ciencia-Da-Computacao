#include <iostream>
using namespace std;

#define max_tamanho 10

// 1. Função auxiliar: verifica se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// 2. Procedimento (void): preenche o vetor Y apenas com os elementos primos de X
void gerarVetorPrimos(int nX, const int vetorX[], int &nY, int vetorY[]) {
    nY = 0; // Inicializa a quantidade de primos
    
    for (int i = 0; i < nX; i++) {
        if (ehPrimo(vetorX[i])) {
            vetorY[nY] = vetorX[i];
            nY++;
        }
    }
}

int main() {
    int vetorX[max_tamanho];
    int vetorY[max_tamanho];
    int nX, nY = 0;

    // Leitura e validação do tamanho do vetor X (1 a 10)
    do {
        cout << "Digite o tamanho do vetor (1 a " << max_tamanho << "): " << endl;
        cin >> nX;
    } while (nX < 1 || nX > max_tamanho);

    // Leitura dos elementos do vetor X
    cout << "\nDigite os elementos do vetor X:" << endl;
    for (int i = 0; i < nX; i++) {
        cout << "X[" << i << "]: ";
        cin >> vetorX[i];
    }

    // Processamento: chama o procedimento sem retorno
    gerarVetorPrimos(nX, vetorX, nY, vetorY);

    // Exibição dos resultados
    cout << "\nVetor X: [ ";
    for (int i = 0; i < nX; i++) {
        cout << vetorX[i] << " ";
    }
    cout << "]" << endl;

    cout << "Vetor Y (Primos de X): [ ";
    if (nY == 0) {
        cout << "Nenhum primo encontrado ";
    } else {
        for (int i = 0; i < nY; i++) {
            cout << vetorY[i] << " ";
        }
    }
    cout << "]" << endl;

    return 0;
}