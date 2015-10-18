/*Switch statements provide you an elegant solution to a whole lot of nested if statements. These allow you to check against multiple possibilities
in the form of cases and then execute the case block which satisfies the given condition. Let us try and understand this by using a simple
program which prints the name of the day with respect to it's numeric represntation in the week. It'll also help you understand parsing of
data types in java since we'll take the input as a String and parse it into an integer. */

public class Main {
static Scanner s = new Scanner(System.in);
public static void main(String[] args) {
String day = new String(); 
day = s.next();
int opt = Integer.parseInt(day); //parsing the string into an integer
switch(opt) {
case 1:
	System.out.println("It's monday");
	break;
case 2 :
	System.out.println("It's tuesday");
	break; 
case 3 :
	System.out.println("It's wednesday");
	break;
case 4 :
	System.out.println("It's thursday");
	break;
case 5 :
	System.out.println("It's friday");
	break;
case 6 :
	System.out.println("It's saturday");
	break;
case 7 :
	System.out.println("It's sunday");
	break;
default:
	System.out.println("Please enter a valid input");
	break;
	}
    }
}

/* The break keyword ensures that only one of the case blocks work
for which the condition is satisfied. The default statement is executed when none of 
the conditions is satisifed mentioned in the case blocks. */