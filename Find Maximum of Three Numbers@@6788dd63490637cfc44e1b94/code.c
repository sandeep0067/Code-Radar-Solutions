// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<c&&b<c)
        printf("%d",c);
    else if(a<b&&c<b)
        printf("%d",b);
    else 
    printf("%d",a);
    return 0;
        
}