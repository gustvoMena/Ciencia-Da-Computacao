"""

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

"""

"""
Exercicio 9
"""

largura = int(input("Digite a largura do terreno "))
comprimento = int(input("Digite o comprimento do terreno "))

area = comprimento * largura

if area < 100:
    print("Area do terreno é ",area,"m² logo é um terreno popular")
elif area > 100 and area < 500:
    print("Area do terreno é", area,"m² logo é um terreno master ")
else:
    print("Area do terreno é", area,"m² logo é um terreno VIP")
