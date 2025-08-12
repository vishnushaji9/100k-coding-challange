// Create two classes Animal and Dog.
// Animal has a method sound() that prints "Animal makes a sound".
// Dog extends Animal and overrides sound() to print "Dog barks".

public class Main{
    
    public static void main(String[]args){
        
        Animal d=new Dog();
        d.sound();
    }
    
}
class Animal{
    
    void sound(){
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal{
    
    void sound(){
        System.out.println("Dog barks");
    }
}
