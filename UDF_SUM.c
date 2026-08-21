#include<stdio.h>

int Sum(int a, int b) {
    return a+b;
}
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    int result = Sum(x,y);
    printf("%d\n", result);
    return 0;
}