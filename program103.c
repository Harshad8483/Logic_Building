
// accept the no. from user and 
# include<stdio.h>
# include<stdlib.h>


int SumFactors( int iNo )
{
     int iCnt = 0, iSum = 0;

    for ( iCnt = 1; iCnt <=iNo/2; iCnt++) 
    {
       if (iNo % iCnt == 0)
       {
          iSum = iSum + iCnt;
       }
    }
    return iSum;

}

int main ()
{

    int iValue = 0, iRet = 0;
   

    printf("Enter a num : \n");
    scanf("%d", &iValue);
    
    
    SumFactors( iValue);
    iRet = SumFactors(iValue);

    printf("Sumation of Factor : %d\n", iRet);



    return EXIT_SUCCESS;
}

// TIme Complexity : O(N/2 )