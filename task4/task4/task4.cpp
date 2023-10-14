#include <stdio.h>
#include <Windows.h>
int main(){
    int choice;
    do{printf("Enter the number of seconds : ");int seconds;scanf_s("%d",&seconds);
    for(seconds;seconds > 0;seconds--){
        printf("\r%04d seconds left",seconds);
        Sleep(1000);}
    printf("\rTime is up!      ");
    printf("\nEnter 1 to restart and 2 to exit : ");scanf_s("%d",&choice);    
    while(choice != 1 && choice != 2){printf("Please, enter a valid option : ");scanf_s("%d",&choice);}
    }while(choice == 1 || choice != 2);
    return 0;}