#include <iostream>
#include "aluno.h"


void ChamarNome(Aluno &aluno){
    std::cout << "Digite o seu nome: " << std::endl;
    std::cin >> aluno.nome;
}


int ChamaNota(int nota[]) {

	int media = 0;

	for (int i = 0; i < 4; i++) {
		std::cout << "Digite a sua nota numero 1°:"<<i+1 << std::endl;
		std::cin >> nota[i];
		media+=nota[i];
	}

	return	media= media/4 ;
}

