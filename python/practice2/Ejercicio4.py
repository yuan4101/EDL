def main():
    while any:
        dictProductos = {
            "tet":{
                "Nombre":"test",
                "Precio":123.4,
                "Stock":0
            },
            "tet1":{
                "Nombre":"text1",
                "Precio":123.4,
                "Stock":0
            },
            "tet2":{
                "Nombre":"text2",
                "Precio":123.4,
                "Stock":0
            },
            "te1":{
                "Nombre":"test1",
                "Precio":123.4,
                "Stock":1
            },
            "te2":{
                "Nombre":"test2",
                "Precio":123.4,
                "Stock":2
            }
        }
        varOpcion = mainMenu()
        if varOpcion == 1:
            print("\n_____ REGISTRAR PRODUCTO _____")
            registrarProducto(dictProductos)
            print(dictProductos)
            
        elif varOpcion == 0:
            print("\nSaliendo...\n")
            break
        
def mainMenu():
    while any:
        try:
            print("\n----------  M E N U  P R I N C I P A L  ----------")
            print("1. Registrar producto")
    
            print("0. Salir")
            print("Seleccione una opcion:")
            varOpcion = int(input())
            if 0 <= varOpcion <= 1:
                return varOpcion
            else:
                print("Ingrese una opcion valida\n")
        except:
            print("Ingrese un numero entero positivo\n")
            
def registrarProducto(prmDictProductos):
    varNombre = validarNombre(prmDictProductos)
    varPrecio = validarPrecio()
    varStock = validarStock()
    varClave = varNombre[0:2] + varNombre[-1]
    
    varCount = 0
    while varClave in prmDictProductos:
        varCount += 1
        if varCount == 1:
            varClave += str(varCount)
        else:
            varClave = varClave[:-1] + str(varCount)
            
    prmDictProductos.update({varClave:dict({"Nombre":varNombre,"Precio":varPrecio,"Stock":varStock})})
            
            

def validarNombre(prmDictProductos):
    while any:
        varFlag = 0
        print("Nombre del producto:")
        varNombre = input()
        
        if not varNombre.isalnum:
            print("El nombre debe ser alfanumerico\n")
        
        for varProducto in prmDictProductos.values():
            if varNombre in dict(varProducto).values():
                print("El nombre del producto ya existe\n")
                varFlag = -1
                break
            
        if varFlag == 0:
            return varNombre
            
def validarPrecio():
    while any:
        try:
            print("Precio del producto:")
            varPrecio = float(input())
            if varPrecio < 0:
                print("El precio debe ser un numero decimal positivo")
            else:
                return varPrecio
        except:
            print("Ingrese un numero decimal positivo\n")
        
def validarStock():
    while any:
        try:
            print("Stock del producto:")
            varStock = int(input())
            if varStock < 0:
                print("El precio debe ser un numero entero positivo")
            else:
                return varStock
        except:
            print("Ingrese un numero entero positivo\n")
        
main()