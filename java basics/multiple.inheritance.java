// Create an interface called Animal that has a method makeSound().
// Then, create two classes:
// Dog
// Cat
// Both classes should implement the makeSound() method differently. Create objects of both classes and call their methods to see different outputs.

public class Main{
    
    public static void main(String[]args){
        
        Dog d=new Dog();
        Cat c=new Cat();
        d.makeSound();
        c.makeSound();
        
    }
}
interface Animal{
    public void makeSound();
}
class Dog implements Animal{
    
    public void makeSound(){
        System.out.println("dog sound");
    }
}
class Cat implements Animal{
    
   public  void makeSound(){
       System.out.println("cat sound"); 
  }

}


