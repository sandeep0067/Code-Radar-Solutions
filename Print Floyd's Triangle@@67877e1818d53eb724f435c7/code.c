// Your code here...
#include <stdio.h>
int main(){
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
        num+=i;
        printf("%d",num);
        }
        printf("\n");
    }
}