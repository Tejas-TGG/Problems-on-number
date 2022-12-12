// Write a program which accept number from user and return difference between summation of all its factors and non factor.

// Input =12
// output= (-34)                   (16-50=-34)

#include <stdio.h>

int FactDiff(int iNo)
{
    int iAns = 0;
    int iFact = 0;
    int iNonFact = 0;
    int icnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (icnt = 1; icnt < iNo; icnt++)
    {
        if (iNo % icnt == 0)
        {
            iFact = iFact + icnt;
        }

         if (iNo % icnt != 0)
        {

            iNonFact = iNonFact + icnt;
        }
        
        iAns=iFact-iNonFact;

    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("Difference between sum of factor and non-factor of %d is %d ", iValue ,iRet);

    return 0;
}