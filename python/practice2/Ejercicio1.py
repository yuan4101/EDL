listEdades = []

while any:
    try:
        print("Ingrese la cantidad de edades que va a digitar: ")
        varCantidad = int(input())
        if varCantidad <= 0 :
            print("La cantidad debe ser un valor positivo mayor a 0\n")
        else:
            break
    except:
        print("la cantidad debe ser un numero entero positivo\n")
 
while any:        
    try:
        while varCantidad != len(listEdades):
            print("Edad", (len(listEdades) + 1), ": ")
            listEdades.insert(len(listEdades), int(input()))
        break
    except:
        print("La edad debe ser un valor positivo\n")
         
print("Lista ingresada:", listEdades)
print("Lista valida (18-35)(filter):", list(filter(lambda x: (18 <= x <= 35), listEdades)))
print("Lista valida (18-35)(listComprehension):", [x for x in listEdades if (18 <= x <= 35)])