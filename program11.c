// Accept number from user and return addition of factors of that number.

// input : 10
// output : 8

#include <stdio.h>

int AdditionFactors(int iNo)
{
    int iCnt = 0;
    int isum=0;
   

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            isum=isum+iCnt;                                          // for update value of isum should be written as "isum="

        }

        
    }
    return isum;

}



int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    iRet = AdditionFactors(iValue);
    iRet = printf("Sum of factors is %d", iRet);

    return 0;
}