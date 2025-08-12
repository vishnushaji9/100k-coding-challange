// Create a class Printer with methods print()
// One that prints an integer.
// Another that prints a string.

public class Main{
    
    public static void main(String[]args){
        
        Printer c=new Printer();
        c.print(10);
        c.print("savid");
        
    }
}
class Printer{
    
    void print(int a){
        System.out.println(a);
    }
    void print( String name){
        System.out.println(name);
    }
}