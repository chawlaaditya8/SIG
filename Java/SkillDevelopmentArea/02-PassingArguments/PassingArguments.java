/* Arguments in Java are very crucial to any function or method since they provide the basis to work on.
Let us start by checking out how to pass arguments through either command line or eclipse IDE.
In the command line navigate to the root directory in which the Main.java is saved and compile using the javac command.
Now run using the java command and pass arguments along with it. eg. java Main arg1 <enter>
This will give the output :Number of arguments : 1
			    		   arg1
In the eclipse IDE go to run configurations in the run dropdown menu and and choose Java application and add add the 
desired arguments.
viola! You just learned how to pass arguments through both command line and eclipse ! */




public class Main {
	public static void main(String[] args) {
		System.out.println("Number of arguments : " +args.length);
		for(String temp : args) {
			System.out.println(temp);
		}
	}

}
