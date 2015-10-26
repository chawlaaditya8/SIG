/*There is a minor difference between the working of while and do-while loops.
  The while tests the condition before executing any of the statements within the while loop.
  The do-while tests the condition after having executed the statements within the loop.
  This means that do-while would execute its statements at least once, even if the condition fails for the first time.
syntax: do 
           {
              this;
              and this;
              and this;
           }
           while(this condition is true); */

#include<stdio.h>

int main()
{
  do
  {
     printf("Hello there\n");
  }
  while(4<1);
 
  return 0;
}




Output
Hello there
