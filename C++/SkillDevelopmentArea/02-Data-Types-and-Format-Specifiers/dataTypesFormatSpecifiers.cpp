// C++ has the following data types along with their format specifier:
// Int ("%d"): 32 Bit integer
// Long (%ld): 32 bit integer (same as Int for modern systems)
// Long Long ("%lld"): 64 bit integer
// Char ("%c"): Character type
// Float ("%f"): 32 bit real value
// Double ("%lf"): 64 bit real value

#include<iostream>
using namespace std;
int main(void){
	int a;
	long b;
	long long c;
	char d;
	float e;
	double f;

	a = 2;
	b = 2.0000003;
	c = 2.9999999;
	d = 'a';
	e = 4.0000002;
	f = 5.2434555;
	
	cout<<"\n"<< a;
	cout<<"\n"<< b;
	cout<<"\n"<< c;
	cout<<"\n"<< d;
	cout<<"\n"<< e;
	cout<<"\n"<< f;
	
	return 0; 
}