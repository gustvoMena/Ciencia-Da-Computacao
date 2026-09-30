#include <iostream>
using namespace std;
#include "Ex2.h"

void ChamarNome(Aluno &aluno) {

	std::cout << "Digite o seu nome: "<< std::endl;
	std::cin >> aluno.nome;
    
}


void ChamarMedia(Aluno &aluno) {
    aluno.media=0;
    
	for (int i = 0; i < 4; i++) {
		std::cout << "Digite a sua nota de numero: "<<i+1<< std::endl;
		std::cin >> aluno.nota[i];
		aluno.media =+ aluno.nota[i];
	}
}