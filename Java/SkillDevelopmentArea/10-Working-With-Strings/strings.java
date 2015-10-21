/*Strings are complex objects in java since it can be treated as character arrays. Strings can be used to store not only
literals but also arithmetic numerals which are then treated as characters. We generally take most of our inputs as strings
and parse them into other data types since strings provide us a lot of flexibility in terms of the operations that can be
performed on them. Today, we will not only learn about some of the string operations but also building strins using the
StringBuilder class. */

class Main {
public static vodi main(String[] args) {
String s1 = "Hello";
String s2 = new String("Hello"); /*both of these methods are used to declare and initialize strings, the latter being
					more object oriented in terms of it's definition */

//Now let us try and compare these strings using the == operator

if(s1==s2) {
System.out.println("Equal");
	}
else {
System.out.println("Not Equal");
	}

/*So what should be the answer accordig to you ? Well the answer is "Not equal".Now although the two strings that we typed 
are exactly the same but since we initialized them using the short hand notation and the instantiation notation respectively,
they cannot be compared as such. For this we use equals method. */

if(s1.equals(s2)) {
System.out.println("Equal");
	}
else {
System.out.println("Not Equal");
	}

/*And now the answer is "Equal" as we expect it to be. Let us now look at some useful methods of this class

int len = s1.length(); //stores the length of the string

char index = s1.charAt(0); //stores the character at index position

int a = s1.compareTo(s2); //returns 0 if the stringss match exactly

String s3 = s1.concat(s2);//concatenates two strings

boolean check = s1.endsWith("ll0"); //returns True or False based on condition

int pos = s1.indexOf('H');//stores position of first occurence of char

String s4=s1.replace('l','t');//replaces the first char with second in the string

String s5=s1.substring(0,4);//gives a substring storing only specified characters


//Now let us look at the StringBuilder class which as the name suggests is used to build Strings and give us a little more
//flexibility in terms of the operations that can be performed on the strings.

String s6 = new String("Welcome");
StringBuilder sb = new StringBuilder(s6);
sb.append(" to Java");
System.out.println(sb); //takes less memory than the usual + method for concatenation since that involves creation of a new String object

    }
}

/*Now that you know how to create and manipulate strings, go on and explore what all can be done with it and have a good time exploring. */

