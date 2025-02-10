#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a;
   scanf("%d",&a);
   for(int i=0;a>i;i++){
    for(int j=1;j=a-1;j++){
        printf(" ");
    }
    for(int k=1;k<j*2-1;j++){
        printf("* ");
    }
   }
    return 0;
}