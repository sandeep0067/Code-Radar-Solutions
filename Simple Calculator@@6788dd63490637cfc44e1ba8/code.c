// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c=="+")
        printf("%d",a+b);
    else if(c=="*")
        printf("%d",a*b);
    else if(c=="-")
        printf("%d",b-a);
    else if(c=="/")
        printf("%d",b/a);

}