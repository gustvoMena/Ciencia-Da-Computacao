/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


unsigned long fatorial (unsigned long n ) {

	unsigned long f = 0;
	unsigned long resultado=1;

	for (int i = 0; i < n; i++) {
		f = n - i ;
		resultado *= f;
	}

	return resultado;

}

unsigned long Combinacao (unsigned long n, unsigned long r ) {

	unsigned long C = 0;
	unsigned long ResultadoParenteses = fatorial(n - r);
	unsigned long Divisor = fatorial(n);
	unsigned long re = fatorial(r);

	C= Divisor/( re * ResultadoParenteses);

	   return C;

}

int main()
{
	unsigned long fat,fat2;

	do {
		std::cout<<"Digite o valor do primeiro par o fatorial: "<<endl;
		std::cin >> fat;
		std::cout<<"Digite o valor do segundo par o fatorial: "<<endl;
		std::cin >> fat2;


	} while(fat <= 0);


	fat = Combinacao(fat,fat2);

	std::cout << "O fatorial seria: " <<fat<< std::endl;

	return 0;
}