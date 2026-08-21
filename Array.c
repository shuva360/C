#include<stdio.h>

int main() {
    int Arr1[7];
    for(int i=0; i<7; i++) {
        scanf("%d", &Arr1[i]);
    }
    for(int j=0; j<7; j++) {
        printf("%d ", Arr1[j]);
    }
    return 0;
}