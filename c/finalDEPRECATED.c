#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 10

// Definición de la estructura Estudiante
typedef struct {
    char nombre[50];
    int edad;
    int id;
} Estudiante;

// Variables globales
Estudiante estudiantes[MAX_ESTUDIANTES]; 
int numEstudiantes = 0;

// Declaraciones de funciones
void agregarEstudiante();
void mostrarEstudiantes();
void buscarEstudiante();
void modificarEstudiante();
void eliminarEstudiante();
void salir();

// Punteros a funciones para el menú
void (*menuOpciones[])() = {agregarEstudiante, mostrarEstudiantes, buscarEstudiante, modificarEstudiante, eliminarEstudiante, salir};

int main() {
    int opcion;

    do {
        printf("\n--- Menú de Gestión de Estudiantes ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar estudiantes\n");
        printf("3. Buscar estudiante por ID\n");
        printf("4. Modificar estudiante\n");
        printf("5. Eliminar estudiante\n");
        printf("6. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 6) {
            (*menuOpciones[opcion - 1])(); // Llamamos la función usando punteros a función
        } else {
            printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 6);

    return 0;
}

// Agregar un estudiante
void agregarEstudiante() {
    if (numEstudiantes >= MAX_ESTUDIANTES) {
        printf("No se pueden agregar más estudiantes (límite alcanzado).\n");
        return;
    }

    Estudiante nuevo;
    printf("Ingrese nombre: ");
    scanf(" %[^\n]", nuevo.nombre);
    printf("Ingrese edad: ");
    scanf("%d", &nuevo.edad);
    printf("Ingrese ID: ");
    scanf("%d", &nuevo.id);

    estudiantes[numEstudiantes++] = nuevo;
    printf("Estudiante agregado correctamente.\n");
}

// Mostrar todos los estudiantes
void mostrarEstudiantes() {
    if (numEstudiantes == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("\n--- Lista de Estudiantes ---\n");
    for (int i = 0; i < numEstudiantes; i++) {
        printf("ID: %d, Nombre: %s, Edad: %d\n", estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].edad);
    }
}

// Buscar un estudiante por ID
void buscarEstudiante() {
    int id;
    printf("Ingrese el ID del estudiante a buscar: ");
    scanf("%d", &id);

    for (int i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].id == id) {
            printf("Estudiante encontrado: ID: %d, Nombre: %s, Edad: %d\n", estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].edad);
            return;
        }
    }

    printf("Estudiante con ID %d no encontrado.\n", id);
}

// Modificar estudiante por ID
void modificarEstudiante() {
    int id;
    printf("Ingrese el ID del estudiante a modificar: ");
    scanf("%d", &id);

    for (int i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].id == id) {
            printf("Ingrese nuevo nombre: ");
            scanf(" %[^\n]", estudiantes[i].nombre);
            printf("Ingrese nueva edad: ");
            scanf("%d", &estudiantes[i].edad);
            printf("Estudiante modificado correctamente.\n");
            return;
        }
    }

    printf("Estudiante con ID %d no encontrado.\n", id);
}

// Eliminar estudiante por ID
void eliminarEstudiante() {
    int id, i;
    printf("Ingrese el ID del estudiante a eliminar: ");
    scanf("%d", &id);

    for (i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].id == id) {
            // Desplazar elementos
            for (int j = i; j < numEstudiantes - 1; j++) {
                estudiantes[j] = estudiantes[j + 1];
            }
            numEstudiantes--;
            printf("Estudiante eliminado correctamente.\n");
            return;
        }
    }

    printf("Estudiante con ID %d no encontrado.\n", id);
}

// Salir del programa
void salir() {
    printf("Saliendo del programa...\n");
}
