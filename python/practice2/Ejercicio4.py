def main():
    while any:
        varOpcion = mainMenu()
        if varOpcion == 1:
            print("\n_____ REGISTRAR PRODUCTO _____")
            
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
            
def registrarProducto():
    varNombre = validarNombre()
    varPrecio = validarPrecio()
    varStock = validarStock()

def validarNombre():
    while any:
        print("Nombre del producto:")
        varNombre = input()
        
        if varNombre.isalnum:
        print("El nombre debe ser alfanumerico\n")
            
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