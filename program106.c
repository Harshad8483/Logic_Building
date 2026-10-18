
// accept the no. from user and check wheather num is perfect or not 
# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>



bool CheckPerfect( int iNo )
{
     int iCnt = 0, iSum = 0;

    for ( iCnt = 1; iCnt <=iNo/2; iCnt++) 
    {
       if (iNo % iCnt == 0)
       {
          iSum = iSum + iCnt;
       }
    }
    return(iSum == iNo);

}

int main ()
{

    int iValue = 0;
    bool bRet = false;
   

    printf("Enter a num : \n");
    scanf("%d", &iValue);
    
    
    bRet = CheckPerfect( iValue);

    if (bRet == true )
    {
        printf("it is perfect num\n");
    }
    else{
        printf("not perfect num\n");
    }
   

    



    return EXIT_SUCCESS;
}

// TIme Complexity : O(N/2 )