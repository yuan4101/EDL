void bubbleSort(int[], int);

void bubbleSort(int list[], int size){
    int temp;
    for (int i = 1; i < 5; i++)
        for (int j = 0 ; j < 5 - 1; j++)
            if (list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
}

