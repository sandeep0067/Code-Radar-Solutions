// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",j);
        }
        for(int k=i;k<1;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
}