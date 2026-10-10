'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
'''
Exercicio 10
'''
nome = str(input("Digite o seu nome: "))
salario = int(input("Digite o seu salario: "))
tempoEmpresa = int(input("Qual é o seu tempo de casa: "))


if tempoEmpresa < 3 :
    salario= (salario * 3/100)+ salario
    print("Seu salario com menos de 3 anos de casa é: ",salario)
    
elif tempoEmpresa >= 3 and tempoEmpresa < 10:
    salario= (salario * (12.5/100) )+ salario
    print("Seu salario com mais de 3 anos e menor que 10 anos é de: ",salario)
else :
    salario= (salario * (20/100) ) + salario
    print("Como voce tem mais de 10 anos de casa seu salario é de :", salario)