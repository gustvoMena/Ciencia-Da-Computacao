/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

unsigned long fatorial (unsigned n) {

	unsigned long f = 0;
	unsigned long resultado=1;

	for (int i = 0; i < n; i++) {
		f = n - i ;
		resultado *= f;
	}

	return resultado;

}

int main()
{
	unsigned long fat;

	do {
		std::cout<<"Digite o valor para descobri o fatorial: "<<endl;
		std::cin >> fat;
	
	    
	} while(fat <= 0);


	fat = fatorial(fat);

	std::cout << "O fatorial seria: " <<fat<< std::endl;

	return 0;
}