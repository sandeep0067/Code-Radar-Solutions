// Your code here...
#include <stdio.h>
int main(){
    int n,num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
        num++;
        printf("%d ",num);
        }
        printf("\n");
    }
}