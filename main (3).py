'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
AnoDeNascimento = int(input("Digite o ano do seu nascimento"))

idade= 2026 - AnoDeNascimento

if idade > 18:
    print("pode votar, sua idade é de: ",idade)
else:
    print("Não pode voltar, sua idade é de: ", idade)