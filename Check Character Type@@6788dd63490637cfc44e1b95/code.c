// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isdigit(a))
    printf("Digit");
    else if(isalpha(a)){
        int ch;
        ch=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else
        printf("Special Character");
    return 0;
}