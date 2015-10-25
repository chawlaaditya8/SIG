/*The conditional operators ? and : are sometimes called ternary operators since they take three arguments. 
syntax for the same is expression 1 ? expression 2 : expression 3.
it can be used instead of if else.*/

#include<iostream>
using namespace std;

int main(void)
 {
   int i;

   cin>>i;
   (i==1 ? cout<<"Amit" : cout<<"All and sundry");
 
   return 0;

 }


/*If i=1, then Amit will appear on screen.
If i!=0, then All and sundry will appear on screen.*/