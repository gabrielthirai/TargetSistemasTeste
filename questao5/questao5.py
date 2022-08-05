#Criando uma função recursiva para a string
def inverteString(string):
    if len(string)==0:
        return string
    else:
        return inverteString(string[1:]) + string[0]
    
#Definindo uma string    
string = "Programação é só um outro nome para a arte perdida do pensamento."

#Imprimindo a string original
print("A frase original é: ", end="" )
print(string)

#Imprimindo a string invertida
print("A frase invertida é: ", end="")
print(inverteString(string))