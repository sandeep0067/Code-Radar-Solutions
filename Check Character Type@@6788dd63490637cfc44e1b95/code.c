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
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else
        printf("Special Character");
    return 0;
}