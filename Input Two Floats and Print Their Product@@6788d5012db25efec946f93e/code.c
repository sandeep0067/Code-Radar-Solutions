#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%f %f", &a, &b);
    printf("Product: %f",a+b);
    return 0;
}