// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        
        printf("\n");
    
    }
     for(int i=n;i>0;i--){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("*");
        }
        for(int k=i;k>0;k--){
            printf("*");
        }
        
        printf("\n");     
}
}