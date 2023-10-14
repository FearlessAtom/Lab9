#include <stdio.h>
int main() {
    int choice;
        do {
            int number, numberofdigits = 0, done = 0, tempnumber;
            do {
                printf("Enter a 3 digit number : "); scanf_s("%d", &number);
                tempnumber = number;
                numberofdigits = 0;
                if (number == 0) {
                    numberofdigits = 1;
                }
                else {
                    while (number != 0) {
                        numberofdigits++;
                        number = number / 10;
                    }
                }
                if (numberofdigits != 3) { printf("Please, enter a valid 3 digit number!\n"); }
            } while (numberofdigits != 3);
            while (tempnumber != 0) {
                int digit = tempnumber % 10;
                done = done * 10 + digit;
                tempnumber = tempnumber / 10;
            }
            printf("The reversed number is : %d\n", done);
            printf("Enter 1 to restart and 2 to exit : "); scanf_s("%d",&choice);
            while (choice != 1 && choice != 2) { printf("Please, enter a valid option : "); scanf_s("%d", &choice); }
        }while (choice == 1 && choice != 2);
    return 0;}