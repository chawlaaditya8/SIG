//if else is used to compare two or more conditions and operate accordingly.
#include<stdio.h>
int main(void)
{
  int a, b;
  printf("Enter a and b");
  scanf("%d%d", &a, &b);
  if(a < b){
    printf("a is smaller than b");
  }
  else{
    printf("b is smaller than a");
  }
  return 0;
}