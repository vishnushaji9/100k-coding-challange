// Write a program where:
// Vehicle class has a method start() that prints "Vehicle started".
// Car class extends Vehicle and overrides start() method.
// Inside Car's start() method, use super.start() to first call the parent method, then print "Car is ready to go".


class Main {
    public static void main(String[] args) {
      Car c=new Car();
      c.start();
    }
}


class Vehical{
    void start(){
        System.out.println("vehical started");
    }
}


class Car extends Vehical{
    
    void start(){
        super.start();
        System.out.println("Car is ready to go");
    }
}