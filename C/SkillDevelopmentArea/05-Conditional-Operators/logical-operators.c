//There are three types of logical operators namely 'AND'(&&), 'OR'(||), 'NOT'(!)

#include<stdio.h>

int main(void)
 {
   int a, b, c;
 
   printf("Enter a, b and c");
   scanf("%d%d%d", &a, &b, &c);

   if((a == 0) && (b == 0) && (c == 0))
       printf("You are on level 0");

   if((a != 0) && (b != 0) && (c != 0))
       printf("You are on level 1");
   
   if((a != 0) || (b == 0) || (c != 0))
       printf("One of the number entered is 0");
   
   return 0;
 }