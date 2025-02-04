#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%.2f %.2f", &a, &b);
    printf("Product: %.2f",a+b);
    return 0;
}