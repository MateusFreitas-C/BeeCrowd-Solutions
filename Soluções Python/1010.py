#Autor: Mateus Freitas
#Nome: Cálculo Simples

cod1, num1, valor1 = input().split(" ")
cod2, num2, valor2 = input().split(" ")

total = (int(num1) * float(valor1)) + (int(num2) * float(valor2))

print("VALOR A PAGAR: R$ %0.2f" %total)
