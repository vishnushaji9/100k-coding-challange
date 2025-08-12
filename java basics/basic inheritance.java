// Create a simple program to demonstrate basic inheritance.
// (A class Animal with a method eat(), and a class Dog inherits from Animal.)



class Main {
    public static void main(String[] args) {
        Dog d=new Dog();
        d.eat();
        d.eatDog();
       
    }
}
class Animal{
    void eat(){
        System.out.println("animals eating");
    }
}
class Dog extends Animal{
    void eatDog(){
        System.out.println("dog eat");
    }
}