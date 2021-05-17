#Autor: Mateus Freitas
#Nome: Salário com Bônus

nome = str(input())
salarioFixo = float(input())
vendas = float(input())

total = salarioFixo + (vendas * 0.15)

print ('TOTAL = R$ %0.2f' %total)
