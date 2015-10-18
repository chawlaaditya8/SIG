/*Conditional statements let you decide which block of code you would like to be executed on the fulfillment of a certain conditions.
Conditional statements form the basis of decisiion making programs in all the major programming languages and gives you the power to 
react differently as a programmer on different inputs by the user using the if-else statements.
Let us consider a very basic program that tells you whether you have passed a subject or not on the basis of the marks you enter.*/

public class Main {
static Scanner s = new Scanner(System.in); //scanner object to take input from the user 
 public static void main(String [] args) {
  int marks;
    System.out.println("Enter your marks");
      marks= s.nextInt(); //taking input from the user
	if(marks >= 50) { //test condition
  		System.out.println("Congrats ! You have passed");
		}
	else {
		System.out.println("Sorry, You have failed.");
		}

	}
}

/* the if statements checks for a particular condition and if it is true then tells the program to executes the next block, the else block 
is executed if the test condition is false.*/

