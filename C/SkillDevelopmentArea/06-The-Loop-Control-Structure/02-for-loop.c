/*The for allows us to specify three things about a loop in a single line.
1) Setting a loop counter to an initial value.
2) Testing the loop counter to determine whether its value has reached the number of repetitions desired.
3) Increasing the value of loop counter each time the program segment within the loop has been executed.
syntax: for(intialise counter; test counter; increment counter)
        {
           do this; 
           and this;
           and this; 
        } 
You can intialize the loop counter before or increment/decrement the loop counter in the body but semicolons must be present between ()*/

#include<stdio.h>

int main()
{
  int i;
  for(i = 0; i <= 10; )
  {
      printf("%d\n", i);
      i = i + 1;
  }
  return 0;
}

Output
1
2
3
4
5
6
7
8
9
10