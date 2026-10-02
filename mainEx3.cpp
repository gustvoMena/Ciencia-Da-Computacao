/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "Ex3.h"
using namespace std;

const int MAX_FUNCIONARIOS = 100;

int LerMatricula() {

	int matricula;
	std::cout << "Digite a sua matricula: " << std::endl;
	std::cin >> matricula;

	return matricula;
}

string LerNome() {
	string nome;
	std::cout << "Digite o seu nome:  " << std::endl;
	getline(cin, nome);

	return nome;
}


string LerCargo() {
	string cargo;
	std::cout << "Digite o seu nome:  " << std::endl;
	getline(cin, cargo);

	return cargo;
}


string LerDepartamento() {
	string departamento;
	std::cout << "Digite o seu departamento:  " << std::endl;
	getline(cin, departamento);

	return departamento;
}

string DataDeAdimissao() {
	string data;
	std::cout << "Digite a data que voce entrou formato hh:xx:yyyy :   " << std::endl;
	getline(cin, data);

	return data;
}

float LerSalario() {
	float salario;
	std::cout << "Digite o seu salario: " << std::endl;
	std::cin >>salario ;

	return salario;
}



int main() {

	char continuar;
	Funcionario funcionarios[MAX_FUNCIONARIOS];
	Funcionario acimaDaMedia[MAX_FUNCIONARIOS];
	int total = 0;

	do {

		cout << "\n--- CADASTRO DE FUNCIONARIO ---" << endl;

		funcionarios[total].matricula = LerMatricula();
        funcionarios[total].nome = LerNome();
        funcionarios[total].cargo = LerCargo();
        funcionarios[total].departamento = LerDepartamento();
        funcionarios[total].dataDeAdimissao = DataDeAdimissao();
        funcionarios[total].salario = LerSalario();
		total++;

		cout << "\nMais um funcionario: s(SIM) / n(NAO)? ";
		cin >> continuar;
		cin.ignore();

	} while (continuar == 's' || continuar == 'S');

	// Processa a media e filtra os cadastrados
	int qtdAcima = MediaSalario(funcionarios, total, acimaDaMedia);

	// Exibe o relatorio final
	cout << "\n==============================================" << endl;
	cout << "  RELATORIO: SALARIOS ACIMA DA MEDIA GERAL    " << endl;
	cout << "==============================================" << endl;

	if (qtdAcima == 0) {
		cout << "Nenhum funcionario com salario acima da media ou nenhum cadastrado." << endl;
	} else {
		for (int i = 0; i < qtdAcima; i++) {
			cout << "\nMatricula: " << acimaDaMedia[i].matricula << endl;
			cout << "Nome: " << acimaDaMedia[i].nome << endl;
			cout << "Cargo: " << acimaDaMedia[i].cargo << endl;
			cout << "Departamento: " << acimaDaMedia[i].departamento << endl;
			cout << "Admissao: " << acimaDaMedia[i].dataDeAdimissao << endl;
			cout << "Salario: R$ " << acimaDaMedia[i].salario << endl;
			cout << "----------------------------------------------" << endl;
		}
	}
	
	return 0;

}