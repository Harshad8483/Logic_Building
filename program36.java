// Approach 3

import java.util.Scanner;

class Arithmetic
{
     public static int Addition(int iNo1, int iNo2)   // Method becames static there is no need to create object 
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;

        return iAns;
    }
}
class program36
{
    
   
    public static void main(String A[])     
    {
       Scanner scanner = null;
       int iValue1 =0, iValue2 = 0, iResult = 0;

       scanner = new Scanner(System.in);

       System.out.println("Enter 1st number :");
       iValue1 = scanner.nextInt();

       System.out.println("Enter 2nd number :");
       iValue2 = scanner.nextInt();

       iResult = Addition(iValue1, iValue2);     // Error

       System.out.println("Addition is : "+iResult);




    }
}
 