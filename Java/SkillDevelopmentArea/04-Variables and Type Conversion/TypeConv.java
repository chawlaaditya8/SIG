/* Variables are the place holders for your useful data. We declare variables to store and manipulate data more
efficiently in programming. The various data types include byte,short,char,int, long,float,double in the respective
order of their space requirments. /*


int a;
a=50;
int b=60;
float c;
c = 3.456

/* One can use either of the ways to define and declare variables. */

/*Type conversion refers to the conversion from one data type to the another. Converting numeric values upward poses
no trouble since a smaller data type can be easile acquired in the bigger one and the conversion is implicitand reliable.*/

int value = 3;
double dvalue = value;


/* here 3 would be converted to 3.0 and the type conversion procedure arises no error. This is not the case in down
ward conversion where we need to be explicit about the conversion to tell the compiler that the loss of data is 
intentional from our part */

double val = 34.5672
int ival = val;  //compile time error since we are in danger of losing data

//solution

int ival = (int)val; //truncates the value to 34 by explicit conversion


/*So what do you think would happen if we try to explicitly convert one data type into the other which is outside 
it's actual range. Only one way to find out. */

int i = 128
byte b = (byte) i; //remember the range for byte is -128 to 127

System.out.println("Value of b is " + b);

//The value of b is -128. 

/*We get this result since it wraps around and reach to it's smallest possible value when exccede by 1.
You're now ready to try your very own conversions and declarations. */

 