#include <stdio.h>
int main() {
    int choice;
    do{printf("|Enter 10 numbers|\n");
    int count = 10, largerthanten = 0, largerthanfive = 0;
    double number, result = 0;
    while (count > 0) {printf(">"); scanf_s("%lf", &number);
            if (number > 10) { largerthanten++; }
            else if (number > 5) { largerthanfive++; }
            count--;}
        if (largerthanten > 4) {
            printf("Kapayjl!");}
        else{printf("The amount of number larger than 10 is : %d\n", largerthanten);
            printf("The amount of number larger than 5 is : %d\n", largerthanfive);}
        printf("Enter 1 to restart and 2 to exit : "); scanf_s("%d", &choice);
        while (choice != 1 && choice != 2){ printf("Please, enter a valid option! : "); scanf_s("%d", &choice);}
    }while (choice == 1 && choice != 2);
    return 0;}