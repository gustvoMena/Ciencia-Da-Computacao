'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
velocidade = int(input("Digite sua velocidade"))
multa= 5
PagarMulta = (velocidade - 80) * 5


if velocidade > 80:
    print("Voce passou da velocidade permitida, terá que pagar uma multa de: ",PagarMulta)
else:
    print("Voce não foi multado")
    
    
    