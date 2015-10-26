/* When 'break' is encountered inside any loop, control automatically passes to the first statement after the loop.
   A break is usually associated with an if. 
   The keyword 'break', breaks the control only from the while in which it is placed. */

#include<stdio.h>

int main()
{
  int num,i;
  
  printf("Enter a number");
  scanf("%d",&num);

  i=2;
  while(i<=num-1)
  {
      if(num%i==0)
      {
           printf("Not a prime number\n");
           break;
      }
      i++;
  }

  if(i==num)
      printf("Prime number\n");

  return 0;
}

Output
Enter a number
12
Not a prime number



or



Enter a number 
2
Prime number