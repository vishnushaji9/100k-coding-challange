// Create a class Calculator with two add methods:
// One that adds two integers.
// One that adds three integers.

public class Main{
    public static void main(String[]args){
        
      Calculator calc=new Calculator();
       calc.add(10,12);
       calc.add(10,20,30);
    }
}
class Calculator{
    
   void add(int a,int b){
       System.out.println(a+b);
   }
   void add(int a, int b, int c){
       System.out.println(a+b+c);
   }
}