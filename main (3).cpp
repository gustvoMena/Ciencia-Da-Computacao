/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void Progressao(int a, int q, int n) {

	    for (int i = 0; i < n-1; i++) {
		 a = a *q;
		
	}

    std::cout << "Resultado da Progressao: "<<a << std::endl;
}


int main()
{
	int a,q,n;

	std::cout << "Digite o elemento inicial:" << std::endl;
	std::cin >> a;
	std::cout << "Digite a razão: " << std::endl;
	std::cin >> q;
	std::cout << "Digite a quantidade de termos para repetir a Progressao" << std::endl;
	std::cin >> n;

	Progressao(a,q,n);

	return 0;
}