// Create a class named Student with two attributes: name and age.
// Create an object of the class in your main method and print the values of the object’s variables



public class Main{
    public static void main(String[]args){
        
        Student s=new Student();
        s.name="vishnu";
        s.age=22;
        s.display();
    }
}
class Student{
    String name;
    int age;
    
    void display(){
        System.out.println("NAME  : "+name+"  AGE : "+age);
    }
}

