//  Accept no from user and count the digits 
import java.util.Scanner;


class Digit 
{
    public int  CountDigits(int iNo)
    {
          
            
          int iCount = 0;      
          
          if(iNo < 0)     // Updater 
          {
            iNo = -iNo;
          }
          while (iNo != 0)
          {
           
            iNo = iNo/10; 
            iCount++;                   
             
          }
          return iCount;

    }
}
class program127
{
   public static void main( String A[])
   {
      int iRet = 0;
      Scanner scanner = new Scanner(System.in);
      
      Digit digit = new Digit();
      
      System.out.println("Enter number : ");

      int iValue = scanner.nextInt();
      iRet = digit.CountDigits(iValue);

      System.out.println("Number of Digits "
       + iRet);
          
   }

}
