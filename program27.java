import java.util.Scanner;

class program27
{
    public static void main(String A[])
    {
       Scanner scanner = null;
       String sName = null;
       int iAge = 0;
       float fMarks = 0.0;  // error



       scanner = new Scanner(System.in);

       System.out.println("Enter your name");
       sName = scanner.next();    // next is accept word & nextline for whole
       
       System.out.println("Enter your Age :");
       iAge = scanner.nextInt();

       System.out.print("Enter your Marks :");
       fMarks = scanner.nextFloat();

       
       System.out.println("Welcome "+sName);
       System.out.println("Your age is :"+iAge);
       System.out.println("Your marks is  "+fMarks);
       
    }
}
 