#include <string>
using namespace std;


typedef struct {
	string nome;
	int nota[3];
} Aluno;

int ChamaNota(int nota[]);
void ChamarNome(Aluno aluno );