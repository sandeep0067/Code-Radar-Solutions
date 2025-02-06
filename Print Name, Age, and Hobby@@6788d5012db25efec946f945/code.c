#include <stdio.h>



int main() {
   char name[10];
   int age;
   char hobby[20];
   scanf("%s %d %s",&name,&age,&hobby);
   printf("Name: %name\nAge: %age\nHobby: %hobby");
   return 0;
}