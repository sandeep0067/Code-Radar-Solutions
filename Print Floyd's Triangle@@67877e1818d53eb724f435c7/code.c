// Your code here...
#include <stdio.h>
int main(){
    int n,num;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
        num+=j;
        printf("%d ",num);
        }
        printf("\n");
    }
}