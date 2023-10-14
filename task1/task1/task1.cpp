#include <stdio.h>
int main() {
    int choice;
    do {
    printf("Enter 0 to exit the program\n");
    int number;
    int result = 1;
    int sum = 0;
    int numbersentered = 0;
    while (true) {
        printf(">"); scanf_s("%d", &number);
        if (number == 0) { break; }
        else if (number % 2 != 0) { printf("The given number is not even!\n"); continue; }
        result = result * number;
        sum = sum + result;
        numbersentered = numbersentered + 1;
        printf("%d\n", result);}
    printf("The sum is : %d\n", sum);
    printf("Numbers entered : %d\n", numbersentered);
    printf("Enter 1 to restart and 2 to exit : "); scanf_s("%d",&choice);
    while (choice != 1 && choice != 2) { printf("Please, enter a valid option : "); scanf_s("%d", &choice); }
    } while (choice == 1 && choice != 2);
    return 0;}