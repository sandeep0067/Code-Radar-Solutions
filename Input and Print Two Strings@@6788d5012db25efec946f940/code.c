#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char first[10],second[10];
    scanf("%c %c",&first, &second);
    printf("You entered: %c %c",first,second);
    return 0;
}