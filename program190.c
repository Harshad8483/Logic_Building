/*
  Input :     4
  output:     -4  -3  -2  -1  0  1  2  3  4 

*/
#include <stdio.h>
#include <stdlib.h>



void Pattern(int iNO)
{
    int iCnt = 0;
    
    
    for (int iCnt= -iNO; iCnt <= 0; iCnt++)    // O(N)
    {
        printf("%d\t", iCnt );
    

    }

    for (int iCnt= 1; iCnt<= iNO; iCnt++)      //O(N)
    {
        printf("%d\t", iCnt );
    }

    printf("\n");
}

// Time Complexity : O(2N)
int main()
{
    int iValue = 0;

    printf("Enter the Value: ");
    scanf("%d", &iValue);


    Pattern(iValue);



    return EXIT_SUCCESS;
}