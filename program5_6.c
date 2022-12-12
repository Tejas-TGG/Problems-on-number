//  Write program which accept number from user and return difference between summation of even digits and summation of odd digits....

// Inclusion of heder file..
#include <stdio.h>

////////////////////////////////////////////////////////
//
//
//           Program......
//
//
////////////////////////////////////////////////////////

int SumDiff(int iNo)
{
    // Local variable initializations:
    int iDigit = 0;
    int iSum = 0;
    int iDiff = 0;
    int iAns = 0;

    // Input updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        if ((iDigit % 2) != 0)
        {
            iDiff = iDiff + iDigit;
        }

        iAns = iSum - iDiff;

        iNo = iNo / 10;
    }

    return iAns;
}

int main()
{
    // Local variable 
    int iValue = 0;
    int iRet = 0;

    // Accept Input
    printf("Enter a number :\n");
    scanf("%d", &iValue);

    iRet = SumDiff(iValue);             //Function Call
    printf("%d", iRet);                 //Return success to Os

    return 0;
}