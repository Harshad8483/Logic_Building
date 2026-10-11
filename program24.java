import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {
    Scanner scanner = null;
    String sName = null;

    scanner = new Scanner(System.in);

    System.out.println("Enter your name");
    sName = scanner.next();    // next is accept word & nextline for whole

    System.out.println("Welcome "+sName);
    }
}
 