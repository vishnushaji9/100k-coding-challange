class Main {
    public static void main(String[] args) {
        
        Remote c=new Samsung();
        c.connect();
        c.presspowerbutton();
    }
}

abstract class Remote{
    
    abstract void presspowerbutton();
    
    void connect(){
        System.out.println("power on tv");
    }
}
class Samsung extends Remote{
    void presspowerbutton(){
        System.out.println("samsung remote on");
    }
}
class sony  extends Remote {
    void presspowerbutton(){
        System.out.println("sony remote on");
    }
}