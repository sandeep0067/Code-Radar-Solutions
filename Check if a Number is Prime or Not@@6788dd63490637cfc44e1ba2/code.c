// Your code here...
#include <stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if (a%i==0){
            printf("Not Prime");
            break;
        }
        else
            printf("Prime");
    }
        
   
        
}