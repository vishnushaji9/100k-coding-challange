// Create a class Calculator with two add methods:
// One that adds two integers.
// One that adds three integers.

public class Main{
    public static void main(String[]args){
        
      Calculator calc=new Calculator();
      System.out.println(calc.add(12, 10));
      System.out.println(calc.add(10, 20, 30));
    }
}
class Calculator{
    
    int add(int a, int b){
        return a+b;
    }
   
    int add(int a, int b, int c){
        return a+b+c;
       }
    
    
}