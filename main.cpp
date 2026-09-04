/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define max_tamanho 10


int localizarVetor(int n,int vetorA[]) {

	for (int i = 0; i < n; i++) {
		if(vetorA[i] <  0) {
			return i;
		} 
	}

    return -1;
}


int main()
{

	int vetorA[max_tamanho];
	int n;

	do {
		std::cout << "Digite o tamanho do vetor: " << std::endl;
		std::cin >> n;
	} while(n < 1 || n > max_tamanho);

	//ler vetorA

	for (int i = 0; i < n; i++) {
		std::cout << "Digite o "<<i+1<<"° termo : "<< std::endl;
		std::cin >> vetorA[i];
	}

	int possicao=  localizarVetor(n, vetorA);


	std::cout << "A posicao do vetor é: "<<possicao<< std::endl;

	return 0;
}