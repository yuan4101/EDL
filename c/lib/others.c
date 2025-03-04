void intercambio(int *, int *);
void invertirArreglo(int *, int);
int* invertirArregloPtr(int *, int);

void intercambio(int *ptrA, int *ptrB){
    int varTemp;
    varTemp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = varTemp;
}

void imprimirArreglo(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("Pos %d: %d\n", i, *(arr + i));
    }
}
void invertirArreglo(int *arr, int size){
    int *begin = arr, *end = arr + size - 1;
    while (begin < end) {
        int temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

int* invertirArregloPtr(int *arr, int size) {
    int *reverse = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        reverse[i] = arr[size - 1 - i];
    }
    return reverse;
}