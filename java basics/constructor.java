// Create a constructor in the Student class that uses the this keyword to distinguish between instance variables and parameters with the same name.
// Then display the data using a method.


class Main {
    public static void main(String[] args) {
       Student s=new Student("sam",12);
    }
}

class Student{
    String name;
    int num;
    Student( String name, int num){
        
        this.name=name;
        this.num=num;
        
        System.out.println("name :"+name+"  age :"+num);
    }
    
}