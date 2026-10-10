#include <iostream>
#include "Ex3.h"
using namespace std;


int MediaSalario(Funcionario funcionarios[], int total, Funcionario resultado[]) {
	float soma = 0;
	for (int i = 0; i < total; i++) {
		soma += funcionarios[i].salario;
	}
	float media = soma / total;

    int qtdAcima=0;
    
    for (int i = 0; i < total; i++) {
        if(funcionarios[i].salario>media){
            resultado[qtdAcima]=funcionarios[i];
            qtdAcima++;
        }
    }
    
    return qtdAcima;
}


