/*
  Input :     4
  output:     0 1 2 3 4

*/
#include <stdio.h>
#include <stdlib.h>



void Pattern(int iNO)
{
    int iCnt = 0;
    
    for (int iCnt= 0; iCnt<= iNO; iCnt++) 
    {
        printf("%d\t", iCnt );
    

    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Value: ");
    scanf("%d", &iValue);


    Pattern(iValue);



    return EXIT_SUCCESS;
}