/*Loops are used to run a set of statement for desired number of times or until a particular condition is being satisfied.
syntax: initialize loop counter;
        while(test loop counter using a condition)
        {
            do this;
            and this;
            loop counter either decresed or increased;
        }*/

#include<stdio.h>

int main()
 {
    int i=1;
    while(i<=10)
    {
         printf("%d\n",i);
         i=i+1; 
    }
    return 0;
 }

