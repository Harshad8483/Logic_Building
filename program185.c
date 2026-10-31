/*
  Input :     4
  output:     1 *  2*  3 * 4 *   

*/
#include <stdio.h>
#include <stdlib.h>



void Pattern(int iNO)
{
    int iCnt = 0;
    
    for (int iCnt= 1; iCnt<= iNO; iCnt++) {
        printf("%d\t*\t", iCnt );
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Value: ");
    scanf("%d", &iValue);


    Pattern(iValue);



    return EXIT_SUCCESS;
}