#include<stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int isPrime = 1;

    for(int i=2; i<=n/2; i++) {
        if(n%i==0){
            isPrime = 0;
            break;
        } 
    }
    if(isPrime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

}