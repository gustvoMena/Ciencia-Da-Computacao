/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


bool Calcular_Primo(int n) {

	if (n==1) return false;

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


int Calcular_ProxPrimo(int n) {

	int candidato=n+1;

	while(!Calcular_Primo(candidato)) {
		candidato++;
	}

	return candidato;

}


int main()
{
	int qtdN;
	int VetorNumero[10];

	do {

		std::cout << "Digite quantos numero desejar ler:" << std::endl;
		std::cin >> qtdN;

	} while(qtdN < 0 || qtdN > 10);


	for (int i = 0; i < qtdN; i++) {
		std::cout << "Digite o : "<<i+1<<"° numero"<< std::endl;
		std::cin >> VetorNumero[i];
	}

	for (int i = 0; i < qtdN; i++) {
		if(Calcular_Primo(VetorNumero[i])) {
			std::cout << "O numero digitado: "<< VetorNumero[i]<<" é primo" << std::endl;
			std::cout << "O proximo numero primo é " <<Calcular_ProxPrimo(VetorNumero[i])<<endl;

		} else {
			std::cout << "Numero digitado: "<<VetorNumero[i]<<" não é primo." << std::endl;
		}
	}





	return 0;
}