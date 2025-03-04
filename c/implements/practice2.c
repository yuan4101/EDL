#include "../header/dependencies.h"

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise5();
void imprimirEstudiante(const Estudiante *est);
void modificarEstudiante(Estudiante *est, const char *nuevoNombre, int nuevaEdad, float nuevoPromedio);

void printMenu(){
    printf("*****   M E N U   *****\n");
    printf("1. Exercise 1\n");
    printf("2. Exercise 2\n");
    printf("3. Exercise 3\n");
    printf("4. Exercise 4\n");
    printf("5. Exercise 5\n");
    printf("0. Exit\n");
    printf("Select an option: ");
}

void exitMenu(){
    printf("\nExiting...\n");
}

void imprimirEstudiante(const Estudiante *est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %.2f\n", est->promedio);
}

void modificarEstudiante(Estudiante *est, const char *nuevoNombre, int nuevaEdad, float nuevoPromedio) {
    strcpy(est->nombre, nuevoNombre);
    est->edad = nuevaEdad;
    est->promedio = nuevoPromedio;
}

void exercise1()
{
    printf("\n***** EXERCISE 1 *****\n");
    int varA = 3, varB = 7, *ptrA = &varA, *ptrB = &varB;
    printf("Valores ANTES del intercambio:\n");
    printf("Variable A: %d\tVariable B: %d\n\n", varA, varB);
    intercambio(ptrA, ptrB);
    printf("Valores DESPUES del intercambio:\n");
    printf("Variable A: %d\tVariable B: %d\n", varA, varB);
    printf("\n");
}

void exercise2()
{
    printf("\n***** EXERCISE 2 *****\n");
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptrArr = arr;
    printf("Arreglo ANTES:\n");
    imprimirArreglo(ptrArr, 5);
    invertirArreglo(ptrArr, 5);
    printf("\nArreglo DESPUES:\n");
    imprimirArreglo(ptrArr, 5);
    printf("\n");
}

void exercise3()
{
    printf("\n***** EXERCISE 3 *****\n");
    int opt, numA, numB, (*intOperation)(int, int);
    float (*floatOperation)(int, int);
    do
    {
        printf("*****   OPERATIONS   *****\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Select an option: ");
        scanf("%d", &opt);
        if (opt != 0){
            printf("Number 1: ");
            scanf("%d", &numA);
            printf("Number 2: ");
            scanf("%d", &numB);
        }

        switch (opt){
            case 0:
                printf("Back to main menu...\n");
                break;
            case 1:
                intOperation = add;
                printf("Add: %d\n", intOperation(numA, numB));
                break;
            
            case 2:
                intOperation = substract;
                printf("Substract: %d\n", intOperation(numA, numB));
                break;

            case 3:
                intOperation = multiply;
                printf("Multiply: %d\n", intOperation(numA, numB));
                break;

            case 4:
                floatOperation = divide;
                printf("Divide: %2.f\n", floatOperation(numA, numB));
                break;

            default:
                printf("No valid option\n");
        }
    } while (opt != 0);
    printf("\n");
}

void exercise4()
{
    printf("\n***** EXERCISE 4 *****\n");
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptrArr = arr;
    printf("Arreglo ANTES:\n");
    imprimirArreglo(ptrArr, 5);
    printf("\nArreglo DESPUES:\n");
    imprimirArreglo(invertirArregloPtr(ptrArr, 5), 5);
    printf("\n");
}

void exercise5()
{
    printf("\n***** EXERCISE 5 *****\n");
    Estudiante estudiante1 = {"Juan Perez", 20, 4.5};
    printf("Datos iniciales del estudiante:\n");
    imprimirEstudiante(&estudiante1);

    modificarEstudiante(&estudiante1, "Maria Gomez", 22, 4.8);
    printf("\nDatos despues de la modificacion:\n");
    imprimirEstudiante(&estudiante1);
    printf("\n");
}