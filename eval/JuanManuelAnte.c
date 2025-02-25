#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct {
    int id;
    char titulo[50];
    char autor[50];
    int anio;
    float precio;
} Libro;

Libro* agregarLibro(int, char*, char*, int, float);
int buscarPorId(Libro*, int, int);
void ordenarLibros(Libro *, int);
void mostrarLibro(Libro *);
void printMenu();

int main(){
    int varOpcion, varCount;
    Libro *libroArray = (Libro*) malloc(MAX * sizeof(Libro));
    libroArray[0] = *agregarLibro(1, "first", "me", 1999, 10.1);
    libroArray[1] = *agregarLibro(2, "second", "me", 1999, 20.2);
    libroArray[2] = *agregarLibro(3, "third", "me", 1999, 30.3);
    varCount = 3;

    do{
        printMenu();
        scanf("%d", &varOpcion);

        switch (varOpcion){
            case 0:
                printf("\nSaliendo ...\n");
                return 0;
            
            case 1:
                int varId, varAnio;
                float varPrecio;
                char varTitulo[50];
                char varAutor[50];

                printf("Id: ");
                scanf("%d", &varId);
                printf("Titulo: ");
                scanf("%s", &varTitulo);
                printf("Autor: ");
                scanf("%s", &varAutor);
                printf("Anio: ");
                scanf("%d", &varAnio);
                printf("Precio: ");
                scanf("%f", &varPrecio);

                libroArray[varCount] = *agregarLibro(varId, varTitulo, varAutor, varAnio, varPrecio);

                printf("Se agrego el libro:\n");
                mostrarLibro(libroArray + varCount);
                varCount++;
                break;
            
            case 2:
                printf("\n----- L I B R O S -----\n");
                for (int i = 0; i < varCount; i++){
                    printf("%d -> ", i + 1);
                    mostrarLibro(libroArray + i);
                }
                break;

            case 3:
                int varBusqueda, varIndice;
                printf("\nIngrese el id a buscar: ");
                scanf("%d", &varBusqueda);
                varIndice = buscarPorId(libroArray, varCount, varBusqueda);
                (varIndice == -1) ? printf("No se encontro el libro\n") : mostrarLibro(libroArray + varIndice);
                break;

            case 4:
                printf("\nIngrese el id del libro que desea MODIFICAR: ");
                scanf("%d", &varBusqueda);
                varIndice = buscarPorId(libroArray, varCount, varBusqueda);
                if (varIndice == -1){
                    printf("No se encontro el libro\n");
                } else{
                    printf("Id: ");
                    scanf("%d", &varId);
                    printf("Titulo: ");
                    scanf("%s", &varTitulo);
                    printf("Autor: ");
                    scanf("%s", &varAutor);
                    printf("Anio: ");
                    scanf("%d", &varAnio);
                    printf("Precio: ");
                    scanf("%f", &varPrecio);
                    libroArray[varIndice] = *agregarLibro(varId, varTitulo, varAutor, varAnio, varPrecio);
                    printf("Se modifico el libro a:\n");
                    mostrarLibro(libroArray + varIndice);
                }
                break;

            case 5:
                printf("\nIngrese el id del libro que desea ELIMINAR: ");
                scanf("%d", &varBusqueda);
                varIndice = buscarPorId(libroArray, varCount, varBusqueda);
                if (varIndice == -1){
                    printf("No se encontro el libro\n");
                } else{
                    printf("Se elimino el libro:\n");
                    mostrarLibro(libroArray + varIndice);
                    for (int i = varIndice; i < varCount-1; i++){
                        libroArray[varIndice] = libroArray[varIndice+1];
                    }
                    varCount--;
                }
                break;
            
            case 6:
                printf("\nOrdenando libros de menor a mayor precio... \n");
                ordenarLibros(libroArray, varCount);
                break;

            default:
                printf("\nOpcion no valida\n");
        }
    } while (varOpcion != 0);
    
    mostrarLibro(libroArray);
    mostrarLibro(libroArray+1);
}

Libro* agregarLibro(int prmId, char* prmTitulo, char* prmAutor, int prmAnio, float prmPrecio){
    Libro *new = (Libro*) malloc(sizeof(Libro));
    new->id = prmId;
    strcpy(new->titulo, prmTitulo);
    strcpy(new->autor, prmAutor);
    new->anio = prmAnio;
    new->precio = prmPrecio;
    return new;
}

int buscarPorId(Libro *prmArray, int prmSize, int prmBusqueda){
    for (int i = 0; i < prmSize; i++)
        if ((prmArray + i)->id == prmBusqueda)
            return i;
    
    return -1;
}

void ordenarLibros(Libro *prmArray, int prmSize){
    Libro* varTemp;
    for (int i = 0; i < prmSize - 1; i++)
        for (int j = 0 ; j < prmSize - 1 - i; j++)
            if (prmArray[j].precio > prmArray[j + 1].precio) {
                Libro varTemp = prmArray[j];
                prmArray[j] = prmArray[j + 1];
                prmArray[j + 1] = varTemp;
            }
}

void mostrarLibro(Libro *prmLibro){
    printf("Id: %d,\tTitulo: %s,\tAutor: %s,\tAnio: %d,\tPrecio: %.2f\n", prmLibro->id, prmLibro->titulo, prmLibro->autor, prmLibro->anio, prmLibro->precio);
    printf("");
}

void printMenu(){
    printf("\n***** M A I N   M E N U *****\n");
    printf("1. Agregar un libro\n");
    printf("2. Mostrar libros\n");
    printf("3. Buscar libro\n");
    printf("4. Modificar libro\n");
    printf("5. Eliminar libro\n");
    printf("6. Ordenar libro\n");
    printf("0. Salir\n");
    printf("Seleccione una opcion: ");
}