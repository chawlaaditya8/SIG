/* A function is a self-contained block of statements that perform a coherent task of some kind.
   Every C program can be thought of as a collection of these functions.
   Suppose you have a task that is always performed exactly in same way. 
   When you want it to be done you'll write a code for it once.
   Then after certain set of codes you need that set of instructions again.
   So rather than writing the same set of instructions over and over again we put those set of intructions separately in a function
   then call it whenever and wherever we need it.
   If a C program contains only one function, it must be main().
   If a C program contains more than one function, then one(and only one) of these functions must be main(),
   because program execution always begins with main(). 

   Let us now look at a simple C function.
   We will be looking at two things--> a function that calls or activates the function and the function itself.*/

#include<stdio.h>

void message();  /* function prototype declaration*/

int main()
{
  message();  /*function call*/
  printf("Cry, and you stop the monotony\n");
  return 0;
}

void message()  /*function definition*/
{
   printf("Smile, and the world smiles with you...\n");
}

Output

Smile, and the world smiles with you...
Cry, and you stop the monotony



/*Here is another example*/

#include<stdio.h>

void italy();
void brazil();
void argentina();

int main()
{
  printf("I am in main\n");

  brazil();
  italy();
  argentina();

  return 0;
}

void argentina()
{
   printf("I am in argentina\n");
}


void brazil()
{
   printf("I am in brazil\n");
}


void italy()
{
   printf("I am in italy\n");
}


Output 

I am in main
I am in brazil
I am in italy
I am in argentina


/*The order of function declaration and definition doesn't matter.
  The order of function call in main() matters.*/