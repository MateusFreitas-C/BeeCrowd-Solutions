#Autor: Mateus Freitas;
#Nome: Figurinhas;

def pilha(F1, F2):
    if F1 % F2 == 0:
        return F2
    else:
        return pilha(F2, F1 % F2)


testes = int(input())
for c in range(testes):
    a = input().split(" ")
    F1 = int(a[0])
    F2 = int(a[1])
    print(pilha(F1, F2))
