// Write a program which accept number from user and return summation of all its non factors.

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iAns = 0;
    int icnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (icnt = 1; icnt < iNo; icnt++)
    {
        if (iNo % icnt != 0)
        {

            iAns = iAns + icnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :");
    scanf("%d", &iValue);
    iRet = SumNonFact(iValue);
    printf("Sum of factor %d is %d ", iValue, iRet);

    return 0;
}