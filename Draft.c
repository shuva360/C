#include<stdio.h>

int main() {
    int Arr1[5] = {1,2,3,4,5};
    int Sum = 0;
    char hello[10] = {'H', 'e', 'l', 'l', 'o'};
    for(int i=0; i<5; i++) {
        Sum = Sum + Arr1[i];
    }
    printf("Sum: %d\n", Sum);
    printf("%s", hello);
    return 0;
}