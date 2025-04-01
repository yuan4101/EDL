def main():
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
    while any:
        varOpcion = mainMenu()
        if varOpcion == 1:
            mostrarProductos(dictProductos)
                
        elif varOpcion == 2:
            registrarProducto(dictProductos)
            
        elif varOpcion == 3:
            actualizarStock(dictProductos)
            
            
        elif varOpcion == 0:
            print("\nSaliendo...\n")
            break
        
def mainMenu():
    while any:
        try:
            print("\n----------  M E N U  P R I N C I P A L  ----------")
            print("1. Mostrar productos")
            print("2. Registrar producto")
            print("3. Actualizar stock")
    
            print("0. Salir")
            print("Seleccione una opcion:")
            varOpcion = int(input())
            if 0 <= varOpcion <= 3:
                return varOpcion
            else:
                print("Ingrese una opcion valida\n")
        except:
            print("Ingrese un numero entero positivo\n")
            
def mostrarProductos(prmDictProductos):
    print("\n________________________ PRODUCTOS ________________________")
    print("No.\tCLAVE\tNOMBRE\t\t\tPRECIO\t\tSTOCK")
    varCount = 0
    for varClave in prmDictProductos.keys():
        dictProductos = dict(prmDictProductos[varClave])
        varCount += 1
        varNombre = str(dictProductos["Nombre"])
        varPrecio = str(dictProductos["Precio"])
        varStock = str(dictProductos["Stock"])
        varNombre = setTabsString(varNombre, 3)
        varPrecio = setTabsString(str(varPrecio), 2)
        print(f"{varCount}\t{varClave}\t{varNombre}{varPrecio}{varStock}")
            
def registrarProducto(prmDictProductos):
    print("\n_____ REGISTRAR PRODUCTO _____")
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
    print(f"Se registro con exito el producto con el Codigo: '{varClave}' -> {str(prmDictProductos[varClave])}")
    
def actualizarStock(prmDictProductos):
    print("\n_____ ACTUALIZAR STOCK _____")
    while any:
        print("Busqueda por codigo de producto: ")
        varClave = input()
        try:
            varProducto = {varClave : dict(prmDictProductos[varClave])}
            print("Producto encontrado...")
            mostrarProductos(varProducto)
            print("\nIngrese el nuevo stock...")
            varStock = validarStock()
            varContent = dict(varProducto[varClave])
            varTemp = varContent["Stock"]
            varContent["Stock"] = varStock
            prmDictProductos[varClave] = varContent
            varProducto = {varClave : dict(prmDictProductos[varClave])}
            print(f"Se actualizo con exito el stock del producto de '{varTemp}' a '{varStock}'")
            break
        except:
            print("Producto no encontrado\n")
    
def validarNombre(prmDictProductos):
    while any:
        print("Nombre del producto:")
        varNombre = input()
        
        if not varNombre.isalnum:
            print("El nombre debe ser alfanumerico\n")
            continue
            
        if len(varNombre) < 3:
            print("El nombre debe tener al menos 3 caracteres\n")
            continue
        
        if len(varNombre) > 23:
            print("El nombre solo puede contener hasta 23 caracteres\n")
            continue
        
        for varProducto in prmDictProductos.values():
            if varNombre in dict(varProducto).values():
                print("El nombre del producto ya existe\n")
                continue
            
        return varNombre
            
def validarPrecio():
    while any:
        try:
            print("Precio del producto:")
            varPrecio = float(input())
            if varPrecio < 0:
                print("El precio debe ser un numero decimal positivo\n")
            elif len(str(varPrecio)) > 15:
                print("El precio debe tener 15 digitos como maximo incluyendo el punto decimal\n")
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
            
def setTabsString(prmString, prmTabs):
    varTab = 8
    varCount = 1
    while any:
        if len(prmString) < (varTab*varCount):
            if prmTabs != 0:
                prmString += "\t"*prmTabs
            else:
                prmString += " "
            break
        prmTabs -= 1
        varCount += 1
    return prmString
    
main()