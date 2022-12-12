// Input : 2   4                   2^4=16
// Output : 16
/*
    Problem to calculate nth power calculation
*/

#include <stdio.h>

int power(int iNo1, int iNo2)
{
    int iCnt = 0;
    register int iMult = 1;
    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }

    return iMult;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iRet = 0;

    printf("Enter Base : \n");
    scanf("%d", &iValue1);

    printf("Enter Power : \n");
    scanf("%d", &iValue2);

    iRet = power(iValue1, iValue2);
    printf("Result is : %d \n", iRet);

    return 0;
}