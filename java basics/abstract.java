// Online Java Compiler
// Use this editor to write, compile and run your Java code online
// Create an abstract class Vehicle with a method startEngine(). Create two subclasses Car and Bike that implement this method differently. Show how abstraction works by calling the method using objects of these subclasses.


class Main {
    public static void main(String[] args) {
        
        Vehical c=new Car();
        c.startengine();
        
    }
}

abstract class Vehical{
    
    abstract void startengine();
}
class Car extends Vehical{
    void startengine(){
        System.out.println("car staring");
    }
}
class Bike extends Vehical{
    void startengine(){
        System.out.println("bike starting");
    }
}


