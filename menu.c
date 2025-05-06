//made by Josh Zimmerman-Gibson//
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu(void) {
    int option;
    system("cls"); // Use "clear" if compiling on Linux
    printf("==== MENU ====\n");
    printf("1. Write to File\n");
    printf("2. Read from File\n");
    printf("3. First Calculation\n");
    printf("4. Second Calculation\n");
    printf("5. Exit\n");
    printf("Select option: ");
    scanf("%d", &option);
    return option;
}
