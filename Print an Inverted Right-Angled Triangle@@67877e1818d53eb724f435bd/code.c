#include <stdio.h>

int main() {
   int a;
   scanf("%d",&a);
   for (int i=a;i>0;--i){
     for(int j;j<i,++i){
        printf("*");}}
    return 0;
}