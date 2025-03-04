def funcEmpleado() :
    while any :
        print("Ingrese el nombre del empleado: ")
        varNombre = input()
        if not varNombre.isalpha() :
            print("El nombre solo debe contener letras\n")
        else :
            break
        
    while any :
        try :
            print("Ingrese el numero de horas trabajadas: ")
            varHoras = int(input())
            if varHoras < 0 :
                print("El numero de horas debe ser un entero positivo\n")
            else :
                break
        except :
            print("El numero de horas debe ser un numero entero\n")
            
    while any :
        try :
            print("Ingrese la tarifa por hora: ")
            varTarifa = float(input())
            if varTarifa <= 0 :
                print("La tarifa por hora debe ser un decimal positivo mayor a 0\n")
            else :
                break
        except :
            print("La tarifa por hora debe ser un decimal\n")
            
    while any :
        try :
            print("Ingrese el nivel de rendimiento (1-5)")
            varRendimiento = int(input())
            if varRendimiento < 1 or varRendimiento > 5 :
                print("El rendimiento debe estar entre 1 y 5")
            else :
                break
        except :
            print("El rendimiento debe ser un numero entero entre 1 y 5")
                
    dictEmpleado = {
        "Nombre" : varNombre,
        "Horas trabajadas" : varHoras,
        "Tarifa por hora" : varTarifa,
        "Nivel de rendimiento" : varRendimiento
    }
    
    salarioBase(dictEmpleado)
    reducciones(dictEmpleado)
    bonificaciones(dictEmpleado)
    categoria(dictEmpleado)
    
    #dictEmpleado.
    
    return dictEmpleado

def salarioBase(prmDict) :
    if prmDict["Horas trabajadas"] <= 40 :
        prmDict.update({"Salario base" : (prmDict["Horas trabajadas"] * prmDict["Tarifa por hora"])})
    else :
        prmDict.update({"Salario base" : ((40 * prmDict["Tarifa por hora"]) + ((prmDict["Horas trabajadas"] - 40) * (1.5 * prmDict["Tarifa por hora"])))})

def reducciones(prmDict) :
    if prmDict["Salario base"] > 2500 :
        prmDict.update({"Impuestos" : (prmDict["Salario base"] * 0.2)})
        prmDict.update({"Salario neto" : (prmDict["Salario base"] - prmDict["Impuestos"])})
    else :
        prmDict.update({"Impuestos" : (prmDict["Salario base"] * 0.1)})
        prmDict.update({"Salario neto" : (prmDict["Salario base"] - prmDict["Impuestos"])})
        
def bonificaciones(prmDict) :
    if prmDict["Nivel de rendimiento"] == 5 :
        prmDict.update({"Bonificaciones" : 300})
    elif prmDict["Nivel de rendimiento"] == 4 :
        prmDict.update({"Bonificaciones" : 200})
    elif prmDict["Nivel de rendimiento"] == 3 :
        prmDict.update({"Bonificaciones" : 100})
    else :
        prmDict.update({"Bonificaciones" : 0})
    prmDict.update({"Salario final" : (prmDict["Salario neto"] + prmDict["Bonificaciones"])})
        
def categoria(prmDict) :
    if prmDict["Salario final"] > 4000 :
        prmDict.update({"Categoria" : "Empleado de alto nivel"})
    elif 2500 <= prmDict["Salario final"] < 4000 :
        prmDict.update({"Categoria" : "Empleado estandar"})
    else :
        prmDict.update({"Categoria" : "Empleado con salario bajo"})
        
def printEmpleado(prmDict) :
    print("\n----------  E M P L E A D O  ----------")
    for i in prmDict.items() :
        print(i[0], ": ", i[1])
        
printEmpleado(funcEmpleado())