/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#define max_tamanho 10

void lerVetor(int n, int VetorA[]) {

	for (int i = 0; i < n; i++) {
		std::cout << "Digite o "<<i+1<<"° do vector " << std::endl;
		std::cin >> VetorA[i];
	}

}



void OrdenarVetor(int n, int VetorA[]) {

	int aux;

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1; j++) {
			if(VetorA[j]> VetorA[j+1] ) {

				aux= VetorA[j];
				VetorA[j]=VetorA[j+1];
				VetorA[j+1]=aux;

			}
		}
	}
}


int main()
{
	int VetorA[max_tamanho];
	int n;

	do {
		std::cout << "Digite o tamanho do vetor: " << std::endl;
		std::cin >> n;

	} while(n< 1 || n> max_tamanho);

	lerVetor(n,VetorA);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Esse é o meu vetor: "<<VetorA[i] << std::endl;
    }
    
    OrdenarVetor(n,VetorA);
    //Mostrar vetor Ordenado
    
    for (int i = 0; i < n; i++) {
       cout << VetorA[i] << " ";
    }


	return 0;
}