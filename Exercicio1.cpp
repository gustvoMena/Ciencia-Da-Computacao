/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include "aluno.h"
using namespace std;


int main()
{
	Aluno aluno;
	int nota[3];
	ChamarNome(aluno);


	int resultado= ChamaNota(nota);
	std::cout << "O resultado da sua media é: "<< resultado << std::endl;

	return 0;
}