/*We can write an entire if else construct within either body of the if statement or the body of an else statement
. This is called nesting of ifs.*/
 
#include<iostream>
using namespace std;
int main(void)
 {
   int i;
   
   cout<<"Enter either 1 or 2";
   cin>>i;

   if(i==2)
       cout<<"You'll go to USA\n";

   else
   {
       if(i==2)
           cout<<"LA is waiting for you";
       else
           cout<<"What about Ibiza";
   }
 return 0;
 }