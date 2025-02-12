// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            num++;
            printf("%d ",num);
        }
printf("\n");
    }
    return 0;
}