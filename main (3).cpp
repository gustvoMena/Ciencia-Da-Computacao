/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include "Ex2.h"
using namespace std;



int main()
{

	Aluno alunos[2];

	for (int i = 0; i < 2; i++) {
		ChamarNome(alunos[i]);
	}

	for (int i = 0; i < 2; i++) {
		ChamarMedia(alunos[i]);
	}

    for (int i = 0; i < 2; i++) {
        std::cout << "O aluno "<<alunos[i].nome<<" Sua media é: "<<alunos[i].media << std::endl;
        
    }
	

	return 0;
}