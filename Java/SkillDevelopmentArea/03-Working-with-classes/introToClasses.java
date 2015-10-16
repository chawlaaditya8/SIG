/* Classes are the basis of object oriented programming since they provide the basic layout to all the objects. You can
visualize them as the blueprint and the finished buildings as the objects. The most basic thing you need to know 
about classes is the access modifiers and the return types. There are four access modifiers namely : public,
private,protected and package protected(default) and then there are static and instance methods. We'll go into details later. For now you need to know that static
methods can call static methods and instace methods can call instance methods. */

class exampleClass {
	public void method(){ //instance method
		System.out.println("Our first method works");
		}
	}

public class Welcomer {
	public static void main(String[] args) {
		exampleClass obj = new exampleClass();
		obj.method(); //calling instance method through object
		method3(); //calling static method directly
		}
public static void method3() { //static method
	System.out.println("Call from static method from main");
}
}