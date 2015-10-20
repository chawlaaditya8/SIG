/* The simple array in java is useful but it is not re-sizeable at runtime.
If we want to work with ordered collection of data, we must use the re-sizeable arrays
that is known as ArrayList. The ArrayList class provides a lot of features in terms of
modification during run-time. They are mutable and thus very helpful in managing
ordered collections of datas. Let us try and understand their conecpt using the following example.
*/
public class main {
public static void main(String[] args) {
ArrayList<String> list = new ArrayList<String>(); //the <> is known as diamond operator 

//diamond operator is used to specify the generic that is what sort of objects the ArrayList
//will consist of, in this case list contains String type objects.

list.add("Hello"); //add function is used to add new entries to the list
list.add("Hi");

System.out.println(list); //list objects will be serialized because of it's toString() method

list.add("Bye"); 
System.out.println(list);

//NOw that we know how to add entries to the ArrayList. Let us learn how to iterate over them
//through Iterators.

Iterator itr = list.iterator(); //creating an iterator to iterate over items
while(itr.hasNext()) { //iterating while there are available items to iterate
String value;
value=itr.next();  //getting the next available value from the list
System.out.println(value);
    }
  }
}

//NOw that you know about ArrayList,you'll soon realize that how much powerful and useful
//it is as compared to normal arrays. Good luck exploring more about the collection types
//available like TreeSet, HashMap etc. 