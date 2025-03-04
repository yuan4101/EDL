#include "../implements/practice2.c"

int main(){
    int opt;
    do{
        printMenu();
        scanf("%d", &opt);
        switch(opt){
            case 0:
                exitMenu();
                break;
                
            case 1:
                exercise1();
                break;
                
            case 2:
                exercise2();
                break;

            case 3:
                exercise3();
                break;
            
            case 4:
                exercise4();
                break;

            case 5:
                exercise5();
                break;
                
            default:
                printf("No valid option\n");
        }
    } while(opt != 0);
    return 0;
}