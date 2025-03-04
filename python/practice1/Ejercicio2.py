while any :
    print("Ingrese su nombre: ")
    varName = input()
    if not varName.isalpha() :
        print("El nombre solo debe contener letras\n")
    else :
        break
        
while any :
    try :
        print("Ingrese su edad: ")
        varEdad = int(input())
        if varEdad < 0 :
            print("La edad no puede ser negativa\n")
        else :
            break
    except :
        print("La edad solo debe contener numeros\n")
        
while any :
    try :
        print("Ingrese su estatura: ")
        varEstatura = float(input())
        if varEstatura < 0 :
            print("La estatura no puede ser negativa\n")
        else :
            break
    except :
        print("La estatura debe ser un numero decimal\n")

print(varName)
if varEdad < 18 :
    print("Menor de edad")
elif 18 <= varEdad <= 40 :
    print("Adulto joven")
else :
    print("Adulto mayor")
if varEstatura < 1.6 :
    print("Estatura baja")
elif 1.6 <= varEstatura < 1.8 :
    print("Estatura media")
else :
    print("Estatura alta")
