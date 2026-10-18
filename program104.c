
// accept the no. from user and check wheather num is perfect or not 
# include<stdio.h>
# include<stdlib.h>


void CheckPerfect( int iNo )
{
     int iCnt = 0, iSum = 0;

    for ( iCnt = 1; iCnt <=iNo/2; iCnt++) 
    {
       if (iNo % iCnt == 0)
       {
          iSum = iSum + iCnt;
       }
    }
   if (iSum == iNo)
   {
     printf("It is perfect number\n");
   }
   else{
     printf(" not perfect\n");
   }

}

int main ()
{

    int iValue = 0;
   

    printf("Enter a num : \n");
    scanf("%d", &iValue);
    
    
    CheckPerfect( iValue);
   

    



    return EXIT_SUCCESS;
}

// TIme Complexity : O(N/2 )