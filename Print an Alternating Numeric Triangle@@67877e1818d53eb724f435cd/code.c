// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
}