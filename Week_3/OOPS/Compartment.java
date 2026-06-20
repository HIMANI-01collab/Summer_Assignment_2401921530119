package Week_3.OOPS;


public abstract class Compartment{
    public abstract String notice();
}

class FirstClass extends Compartment{
    public String notice(){
        return "This is First Class compartment.";
    }
}
class Ladies extends Compartment{
    public String notice(){
        return "This is Ladies compartment.";
    }
}
class General extends Compartment{
    public String notice(){
        return "This is General compartment.";
    }
}
class Luggage extends Compartment{
    public String notice(){
        return "This is Luggage compartment.";
    }
}

class TestCompartment{
    public static void main(String[] args){
        Compartment[] compartments= new Compartment[10];
        for(int i=0; i<compartments.length; i++){
            int n=(int)(Math.random()* 4)+1;
            switch(n){
                case 1:
                    compartments[i]= new FirstClass();
                    break;
                case 2:
                    compartments[i]= new Ladies();
                    break;
                case 3:
                    compartments[i]= new General();
                    break;
                case 4:
                    compartments[i]= new Luggage();
                    break;
            }
        }
        for(int i=0; i<compartments.length ; i++){
            System.out.println(compartments[i].notice());
        }
    }
}
//concept------>

/*Compartment references point to different subclass objects (FirstClass, Ladies, General, Luggage).
 When notice() is invoked, Java chooses the appropriate overridden method according to the object's actual type. 
 This is runtime polymorphism. */

 /*Compartment[] compartments = new Compartment[10];
   creates an array object of length 10.
       ->compartments is a reference variable.
       ->array's element type is Compartment.
       ->initially, all 10 elements contain null. */

/*compartments[0] = new FirstClass();
     ->creates a FirstClass object and stores a reference to it in index 0.
     ->reference type of compartments[0] is Compartment.
     ->actual (runtime) type of the object is FirstClass. */

 /*compartments[0].notice();
       here, the reference is of type Compartment, 
       but the actual object is a FirstClass, so  FirstClass.notice() should execute. */   