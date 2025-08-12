// Demonstrate Hierarchical Inheritance with a base class Shape and two subclasses Circle and Rectangle.


class Main {
    public static void main(String[] args) {
      
      Circle obj=new Circle();
      Rectangle obj1=new Rectangle();
      
      obj.circle();
      obj.shape();
      
      System.out.println("");
      
      obj1.rectangle();
      obj1.shape();
     
      
      
      
    }
}
class Shape{
    void shape(){
        System.out.println("shape");
    }
}
class Circle extends Shape{
    void circle(){
        System.out.println("Circle");
    }
}
class Rectangle  extends Shape{
  void rectangle(){
      System.out.println("rectangle");
  }  
}