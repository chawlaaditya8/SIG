//if else is used to compare two or more conditions and operate accordingly.
#include<iostream>
using namespace std;
int main(void)
{
  int a, b;
  cout<<"Enter a and b";
  cin>>a>>b;
  if(a<b){
    cout<<"a is smaller than b";
  }
  else{
    cout<<"b is smaller than a";
  }
  return 0;
}