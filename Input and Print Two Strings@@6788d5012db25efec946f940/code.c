#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char first[100],second[100];
    scanf("%s %s",&first, &second);
    printf("You entered: %s and %s",first,second);
    return 0;
}