/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


bool calcular(int n) {

	int parteDireita, parteEsquerda;
	parteEsquerda =  n /100;
	parteDireita = n % 100;

    int resultado;
	resultado= parteDireita + parteEsquerda;

    return (resultado * resultado == n);

}

int main()
{

	int numero;

	std::cout << "Digite um numero" << std::endl;
	std::cin >> numero;

    if(calcular(numero)){
        std::cout << " O numero digitado "<< numero <<"  tem o mesmo funcionamento do 3025" << std::endl;
    }


	return 0;
}