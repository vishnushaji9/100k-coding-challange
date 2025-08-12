// Create a class Student with:
// A static variable collegeName (shared by all students)
// Instance variables name and rollNo
// A method to display all values
// Create multiple objects and display their information.


public class Main{
    public static void main(String []args){
        Student s=new Student();
        Student s1=new Student();
        s.name="nandhu";
        s.rollno=12;
        s1.name="justin";
        s1.rollno=13;
        s.display();
        s1.display();
    }
}

class Student{
   static String collagename="brototype"; 
   String name;
   int rollno;
   void display(){
       System.out.println("collage name :"+collagename+" name : "+name+" rollno :"+rollno);
   }
   
}
