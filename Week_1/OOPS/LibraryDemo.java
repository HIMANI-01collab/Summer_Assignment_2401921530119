package Week_1.OOPS;

interface LibraryUser {
  void registerAccount();
  void requestBook();
}
class KidUsers implements LibraryUser{
  int age;
  String bookType;
  public void registerAccount(){
    if(age<12){
      System.out.println("You have successfully registered under a Kids Account");
    }
    else{
      System.out.println("Sorry, Age must be less than 12 to register as a kid");
    }
  }
  public void requestBook(){
    if("Kids".equals(bookType)){
      System.out.println("Book Issued successfully, please return the book within 10 days");
    }
    else{
      System.out.println("Oops, you are allowed to take only kids books");
    }
  }
}
class AdultUsers implements LibraryUser{
  int age;
  String bookType;
  public void registerAccount(){
    if(age>=12){
      System.out.println("You have successfully registered under a Adult Account");
    }
    else{
      System.out.println("Sorry, Age must be greater than 12 to register as an adult");
    }
  }
  public void requestBook(){
    if("Fiction".equals(bookType)){
      System.out.println("Book Issued successfully, please return the book within 7 days");
    }
    else{
      System.out.println("Oops, you are allowed to take only Fiction books");
    }
  }
}

public class LibraryDemo{
public static void main(String[] args){
  //Test case 1
  System.out.println();
  
  System.out.println("Test case 1");
  KidUsers kid1 =new KidUsers();
  kid1.age= 10;
  kid1.bookType="Kids";
  kid1.registerAccount();
  kid1.requestBook();
    
  System.out.println();

  KidUsers kid2 =new KidUsers();
  kid2.age= 18;
  kid2.bookType="Fiction";
  kid2.registerAccount();
  kid2.requestBook();

  //Test case 2
  System.out.println();

  System.out.println("Test case 2");
  AdultUsers adult1 =new AdultUsers();
  adult1.age= 5;
  adult1.bookType="Kids";
  adult1.registerAccount();
  adult1.requestBook();

  System.out.println();

  AdultUsers adult2 =new AdultUsers();
  adult2.age= 23;
  adult2.bookType="Fiction";
  adult2.registerAccount();
  adult2.requestBook();

}
}
