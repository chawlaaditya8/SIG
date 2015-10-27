/* The control statement that allows us to make a decision from the number of choices is called a switch or switch-case-default.
   syntax: switch(integer expression)
           {
              case constant 1:
                   do this;
              case constant 2:
                   do this;
              case constant 2:
                   do this;
              default :
                   do this;
           }

The integer expression following the keyword 'switch' is any C expression that will yield an integer value.
It could be constant like 1, 2 or 3, or an expression that evaluates to an integer.
The keyword 'case' is followed by an integer or a character constant.
Each constant in each case must be different from all the others. */

#include<stdio.h>

int main()
{
    int i = 2;
    
    switch(i)
    {
         case 1: 
                printf("I am in case 1\n");
         case 2: 
                printf("I am in case 2\n");
         case 3: 
                printf("I am in case 3\n");
         default: 
                printf("I am in default\n");
    }
return 0;
}

Output
I am in case 2
I am in case 3
I am in default


/* Thus to print one command rather than printing all the commands given, we use break statement.
   There is no for a break statement after the default, since on reaching the default case, the control come out of the switch anyway.*/


#include<stdio.h>

int main()
{
    int i = 2;
    
    switch(i)
    {
         case 1: 
                printf("I am i	n case 1\n");
                break;
         case 2: 
                printf("I am in case 2\n");
                break;
         case 3: 
                printf("I am in case 3\n");
                break;
         default: 
                printf("I am in default\n");
    }
return 0;
}

Output
I am in case 2