'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
'''
Exercicio5
'''
nome= str(input("Digite o seu nome: "))
sexo= str(input("Digite o seu sexo: "))
valorCompras= int(input("Digite o valor das compras : "))

if sexo=='M'or sexo=='m' :
    desconto = (5/100) *valorCompras
    print("O seu desconto é de: ",desconto,"Ficou um total de ",valorCompras-desconto)
elif sexo=='F'or sexo=='f':
    desconto = (13/100) * valorCompras
    print("O seu desconto é de: ",desconto,"Ficou um total de ",valorCompras-desconto)