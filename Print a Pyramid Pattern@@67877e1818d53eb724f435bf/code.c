/#include <stdio.h>

int main() {
   int a;
   scanf("%d",&a);
   for(int i=0;a>i;i++){
    for(int j=1;j<a-i;j++){
        printf(" ");
    }
    for(int k=1;k<j*2-1;k++){
        printf("* ");
    }
   }
    return 0;
}