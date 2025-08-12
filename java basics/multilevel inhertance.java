// Create a Java program showing Multilevel Inheritance: Person → Employee → Manager.

public class Main{
    
    public static void main(String[]args){
        
        Manager m=new Manager();
        m.displayperson();
        m.displayemployee();
        m.Managerdisplay();
        
        
    }
}

class Person{
    void displayperson(){
        System.out.println("no of workers");
    }
}
class Employee extends Person{
    void  displayemployee(){
        System.out.println("employee");
    }
}
class Manager extends Employee{
    
    void Managerdisplay(){
        System.out.println("manager ");
    }
    
}