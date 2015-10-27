/*We can write an entire if else construct within either body of the if statement or the body of an else statement
. This is called nesting of ifs.*/
 
#include<stdio.h>

int main(void)
 {
   int i;
   
   printf("Enter either 1 or 2");
   scanf("%d", &i);

   if(i == 2)
       printf("You'll go to USA\n");

   else
   {
       if(i == 2)
           printf("LA is waiting for you");
       else
           printf("What about Ibiza");
   }
 return 0;
 }