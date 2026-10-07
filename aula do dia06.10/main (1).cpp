/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include "vendedores.h"
#include <string>
#define max_tamanho 100

void QtdDeVendedores(int &qtdVendedores) {
	std::cout << "Digite quantos vendedores terá: " << std::endl;
	std::cin >> qtdVendedores;
}


void ChamarNome(Vendedores &vendedor) {
	std::cout << "Digite o nome do vendedor: " << std::endl;
	cin.ignore();
	getline(cin,vendedor.nome);
}

void chamarQtdVendas(Vendedores &vendedor) {
	std::cout << "Digite quantas vendas esse vendedor teve: " << std::endl;
	std::cin >> vendedor.qtd_vendas;
	vendedor.totalVendas+=vendedor.qtd_vendas;
}


int main()
{
	int qtdVendedores=0;
	Vendedores vendedor[max_tamanho];
	char opcao;

	QtdDeVendedores(qtdVendedores);

	for (int i = 0; i < qtdVendedores; i++) {
		std::cout << "-----CADASTRO DE VENDEDOR N°"<<i+1<<"--------" << std::endl;
		ChamarNome(vendedor[i]);
		do {
			chamarQtdVendas(vendedor[i]);
			std::cout << "Deseja cadastrar mais uma venda? S ou N" << std::endl;
			std::cin >> opcao;
			cin.ignore();
		} while(opcao =='S'|| opcao =='s');

	}

std::cout << "---------Mostrando o resultado das vendas------" << std::endl;

for (int i = 0; i < qtdVendedores; i++) {
    std::cout << "Nome do vendedor: "<<vendedor[i].nome<<" vendeu : "<<vendedor[i].totalVendas << std::endl;
}


	return 0;
}