// Your code here...#include <stdio.h>
int main(){
    int a;
    scanf("%a",&a);
    if(a%3==0||a%5==0)
        printf("Divisible by both");
    else if(a%3==0)
        printf("Divisible by 3");
    else if(a%5==0)   printf("Divisible ny 5");
    else printf("Not Divisible");

}