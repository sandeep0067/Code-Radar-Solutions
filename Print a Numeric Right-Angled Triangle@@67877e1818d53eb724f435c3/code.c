// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int k=1;
        for(int j=0;j<i;j++){
            
            printf("%d ",k);
            k+=1;
            
        }
    printf("\n");
    
    }
    return 0;
}