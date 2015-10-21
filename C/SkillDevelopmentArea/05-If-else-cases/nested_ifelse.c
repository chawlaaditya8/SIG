//We can write an entire if-else construct within either the body of the if statement or the body of an else statement. This is called nesting of ifs
#include<stdio.h>
int main(void)
{
 int i;

 printf("Enter either 1 or 2");
 scanf("%d",&i);

 if(i==1)
 {
    printf("You won a ticket to california");
 }
 else
 {
    if(i==2)
       printf("You can go to Greenland");
    else
       printf("You are the chosen one");
 }
 return 0;
} 