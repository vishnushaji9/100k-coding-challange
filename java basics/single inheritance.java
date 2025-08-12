// Write a Java program showing Single Inheritance where a Vehicle class is inherited by a Car class.
public class Main{
    public static void main(String[]args){
      
      Car c=new Car();
      c.car();
      c.vehical();
        
    }
}
class Vehical{
    void vehical(){
        System.out.println("vehicals");
    }
}
class Car extends Vehical{
    void car(){
        System.out.println("car");
    }
}