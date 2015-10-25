//There are three types of logical operators namely 'AND'(&&), 'OR'(||), 'NOT'(!)

#include<iostream>
using namespace std;
int main(void)
 {
   int a,b,c;
 
   cout<<"Enter a, b and c";
   cin>>a>>b>>c;

   if(a==0 && b==0 && c==0)
       cout<<"You are on level 0";

   if(a!=0 && b!=0 && c!=0)
       cout<<"You are on level 1";
   
   if(a!=0 || b==0 || c!=0)
       cout<<"One of the number entered is 0";
   
   return 0;
 }