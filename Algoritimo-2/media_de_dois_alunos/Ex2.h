#include <string>
using namespace std;

typedef struct{
    string nome;
    int nota[4];
    int media;
    
}Aluno;

void ChamarNome(Aluno &aluno);
void ChamarMedia(Aluno &aluno);