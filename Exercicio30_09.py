"""

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

"""

dado = []
pessoas = []
maior = menor = 0
i = 1

while True:
    try:
        nome = str(input("Digite o seu nome: "))
        peso = float(input("Digite o seu peso: "))

    except ValueError as e:
        print("Erro: ", e)
        print("Informa novamente.")
    except Exception as e:
        print("O texto digitado não é um nome ", e)
    else:
        dado.append(nome)
        dado.append(peso)
        pessoas.append(dado[:])
        dado.clear()
        i += 1
        while True:
            resposta= str(input("Deseja continua? S ou N: ")).lower().strip()
            if resposta in 'sn':
                break
            else:
                print("Erro: voce deve gitiar somente s ou n!")
               
        if resposta =='n':
            break
        
        
print('='*40)
maior= menor=pessoas[0][1]
for p in pessoas:
    if p[1] >= maior:
        maior = p[1]
    if p[1]<= menor:
        menor = p[1]
        
print(pessoas)
print("foram cadastrado ", len(pessoas),"pessoas")
print("O maior peso é: ",maior, "kg. As pessoas mais são:", end='' )
for p in pessoas:
    if p[1]== maior:
        print(p[0],end=',')

print("\nO menor peso é: ",menor, "kg. As pessoas menos são:", end='' )
for p in pessoas:
    if p[1]== menor:
        print(p[0],end=',')
            
            
            
            
        