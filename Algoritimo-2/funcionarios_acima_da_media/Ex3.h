#include <iostream>
#include <string>
using namespace std;

typedef struct {
	int matricula;
	string nome;
	string cargo;
	string departamento;
	string dataDeAdimissao;
	float salario;
} Funcionario;

int MediaSalario(Funcionario funcionarios[], int total, Funcionario resultado[]);