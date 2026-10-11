// Approach 3

import java.util.Scanner;


class program39
{
    
   
    public static void main(String A[])     
    {
       Scanner scanner = null;
       Arithmetic arithmetic = null;

       int iValue1 =0, iValue2 = 0, iResult = 0;

       scanner = new Scanner(System.in);

       System.out.println("Enter 1st number :");
       iValue1 = scanner.nextInt();

       System.out.println("Enter 2nd number :");
       iValue2 = scanner.nextInt();
       
       arithmetic = new Arithmetic();

       iResult = arithmetic.Addition(iValue1, iValue2);     

       System.out.println("Addition is : "+iResult);




    }
}

class Arithmetic
{
     public int Addition(int iNo1, int iNo2)   // Method becames static there is no need to create object 
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;

        return iAns;
    }
}
 