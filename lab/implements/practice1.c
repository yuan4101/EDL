#include "../header/dependencies.h"

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

void exercise1()
{
    printf("\n***** EXERCISE 1 *****\n");
    int firstNumber, secondNumber;
    printf("First int: ");
    scanf("%d", &firstNumber);
    printf("Second int: ");
    scanf("%d", &secondNumber);
    
    int add = firstNumber + secondNumber;
    int sub = firstNumber - secondNumber;
    int mult = firstNumber * secondNumber;
    float div = (secondNumber != 0) ? (float) firstNumber / secondNumber : 0;
    
    printf("------------------------------\n");
    printf("Addition: %d\nSubstraction: %d\nMultiplication: %d\n", add, sub, mult);
    if(div == 0)
        printf("Not divisible by 0\n");
    else
        printf("Division: %.2f\n", div);
    printf("\n");
}

void exercise2(){
    printf("\n***** EXERCISE 2 *****\n");
    int num, state;
    printf("Number: ");
    scanf("%d", &num);
    
    if(num %2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");
        
    if(num > 0)
        state = 1;
    else if(num < 0)
        state = -1;
    else
        state = 0;
        
    switch(state){
        case 1: 
            printf("Is positive\n\n");
            break;
        
        case -1:
            printf("Is negative\n\n");
            break;
        
        case 0:
            printf("Is zero\n\n");
            break;
            
        default:
            printf("Error\n\n");
    }
}

void exercise3(){
    printf("\n***** EXERCISE 3 *****\n");
    printf("---------- For cycle ----------\n");
    for (int i = 15; i > 0; i--)
        printf("%d ", i);
    printf("\n\n");

    printf("---------- While cycle ----------\n");
    int whileNum = 30;
    while (whileNum >= 0){
        if (whileNum %2 != 0)
            printf("%d ", whileNum);
        whileNum--;
    }
    printf("\n\n");

    printf("---------- Do While cycle (Factorial) ----------\n");
    int doWhileNum, doWhileResult = 1;
    printf("Number: ");
    do
        scanf("%d", &doWhileNum);
    while (doWhileNum < 0);
    if (doWhileNum != 0)
        do{
            doWhileResult *= doWhileNum;
            doWhileNum--;
        } while (doWhileNum > 0);
    printf("Factorial: %d\n\n", doWhileResult);

    printf("---------- Second For cycle ----------\n");
    int forNum, add = 0;
    printf("Number: ");
    scanf("%d", &forNum);
    for (int i = 1; i <= forNum; i++)
        add += i;
    printf("Add: %d\n\n", add);
}

void exercise4(){
    printf("\n***** EXERCISE 4 *****\n");
    int num1, num2;
    printf("First int: ");
    scanf("%d", &num1);
    printf("Second int: ");
    scanf("%d", &num2);
    
    printf("------------------------------\n");
    printf("Addition: %d\nSubstraction: %d\nMultiplication: %d\n", add(num1, num2), substract(num1, num2), multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));
    printf("\n");
}

void exercise5(){
    printf("\n***** EXERCISE 4 *****\n");
    int numbers[5], prom = 0, max, min;
    for (int i = 0; i < 5; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    min = numbers[0];
    for (int i = 0; i < 5; i++){
        prom += numbers[i];
        max = (numbers[i] > max) ? numbers[i] : max;
        min = (numbers[i] < min) ? numbers[i] : min;
    }
    prom /= 5;
    printf("------------------------------\n");
    printf("Promedio: %d\nMax number: %d\nMin number: %d\n", prom, max, min);
    bubbleSort(numbers, 5);
    printf("Orden ascendente: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", numbers[i]);
    printf("\n\n");
}