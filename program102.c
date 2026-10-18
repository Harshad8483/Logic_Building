
// accept the no. from user and 
# include<stdio.h>
# include<stdlib.h>


void DisplyFactors( int iNo )
{
     int iCnt = 0;
     printf("Factors of %d are : \n", iNo);
    for ( iCnt = 1; iCnt <=iNo/2; iCnt++) 
    {
       if (iNo % iCnt == 0)
       {
        printf("%d\n", iCnt);
       }
    }

}

int main ()
{

    int iValue = 0;
   

    printf("Enter a num : \n");
    scanf("%d", &iValue);
    
    
    DisplyFactors( iValue);



    return EXIT_SUCCESS;
}

// TIme Complexity : O(N/2 )