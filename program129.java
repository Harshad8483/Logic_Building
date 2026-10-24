//  Accept no from user and perform addition of digits 
import java.util.Scanner;


class Digit 
{
    public int SumDigits(int iNo)
    {
           
          int iSum = 0;      
          
          if(iNo < 0)     // Updater 
          {
            iNo = -iNo;
          }
          while (iNo != 0)
          {
            iSum = iSum + (iNo%10);
            iNo = iNo/10; 
                             
             
          }
          return iSum;

    }
}
class program129
{
   public static void main( String A[])
   {
      int iRet = 0;
      Scanner scanner = new Scanner(System.in);
      
      Digit digit = new Digit();
      
      System.out.println("Enter number : ");

      int iValue = scanner.nextInt();
      iRet = digit.SumDigits(iValue);

      System.out.println("Summation of digits : "+iRet);
          
   }

}
