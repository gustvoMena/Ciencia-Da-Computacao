#include <iostream>
#include <string>

using namespace std;

#define max_alunos 20

// Retorna a média como float para não descartar casas decimais
float calculaMedia(int n, int notas[]) {
    float media = 0;

    for (int i = 0; i < n; i++) {
        media += notas[i];
    }

    return media / n;
}

// Exibe os alunos com nota acima da média
void alunosAcimaDaMedia(int n, int notas[], string nomes[], float media) {
    cout << "\n--- Alunos com nota acima da media (" << media << ") ---" << endl;

    for (int i = 0; i < n; i++) {
        if (notas[i] > media) {
            cout << "- " << nomes[i] << " (Nota: " << notas[i] << ")" << endl;
        }
    }
}

// Conta a quantidade de estudantes com nota abaixo da média
int VerificarMedia(int n, int notas[], float media) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        if (notas[i] < media) {
            contador++;
        }
    }

    return contador;
}

int main() {
    string nomes[max_alunos];
    int notas[max_alunos];
    int n;

    // Garante que o número de alunos esteja entre 1 e 20
    do {
        cout << "Digite o numero de alunos: ";
        cin >> n;
        
    } while (n < 1 || n > max_alunos);

    // Remove o ENTER que ficou no buffer após a leitura de n
    cin.ignore();

    // Leitura dos nomes e notas
    for (int i = 0; i < n; i++) {

        cout << "\nDigite o nome do aluno " << i + 1 << ": ";
        getline(cin, nomes[i]);
        cin.ignore();

        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];

        // Remove o ENTER que ficou no buffer após a leitura da nota
       cin.ignore();
    }

    // Calcula a média da turma
    float mediaTurma = calculaMedia(n, notas);

    // Exibe os alunos que ficaram acima da média
    alunosAcimaDaMedia(n, notas, nomes, mediaTurma);

    // Conta quantos alunos ficaram abaixo da média
    int abaixo = VerificarMedia(n, notas, mediaTurma);

    cout << "\nTotal de alunos abaixo da media: "
         << abaixo << endl;

    return 0;
}
