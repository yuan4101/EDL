int add(int, int);
int substract(int, int);
int multiply(int, int);
float divide(int, int);

int add(int num1, int num2){
    return num1 + num2;
}

int substract(int num1, int num2){
    return num1 - num2;
}

int multiply(int num1, int num2){
    return num1 * num2;
}

float divide(int num1, int num2){
    float div = (num2 != 0) ? (float) num1 / num2 : 0;
    if(div == 0)
        return 0;
    else
        return div;
}