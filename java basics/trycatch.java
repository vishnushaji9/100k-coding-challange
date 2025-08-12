// Online Java Compiler
// Use this editor to write, compile and run your Java code online
//  Write a program to demonstrate exception handling by handling ArithmeticException (e.g., division by zero).
// -> Create a message in a finally block

class Main {
    public static void main(String[] args) {
        
        int a=10, b=0;
        
        try{
            int c = a/b;
            System.out.println("result "+c);
        }catch(ArithmeticException e){
            System.out.println("cannot divided by zero");
        }finally{
            System.out.println("result find ");
        }
    }
}