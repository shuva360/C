#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of the day you wanna know: ");
    if (scanf("%d", &a) != 1) {
        printf("Please enter a whole number from 1 to 7.\n");
        while (getchar() != '\n') {
        }
        printf("Press Enter to close...");
        getchar();
        return 1;
    }
    printf("\nDay %dth day of the week is: ", a);

    switch (a) {
        case 1:
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;
        default:
            printf("There is no such day, Dumbass!!\n");
    }
    printf("\nPress Enter to close...");
    getchar();
    getchar();
    return 0;
}