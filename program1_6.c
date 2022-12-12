// Write program which accept number from user and return the count of even digits.....


// Inclusion of heder file..
#include <stdio.h>

////////////////////////////////////////////////////////
//
//
//           Program......
//
//
////////////////////////////////////////////////////////


int Count(int iNo)
{
    //Local variable initializations:
    int iDigit = 0;
    int iFreq = 0;

    //Input updator 
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic
    while (iNo > 0)
    {
        iDigit=iNo%10;
        if (iDigit%2==0)
        {
            iFreq++;
        }

        iNo = iNo / 10;
    }

    return iFreq;
}

int main()
{
    // Local variable 
    int iValue = 0;
    int iRet = 0;

    // Accept Input
    printf("Enter a number :\n");
    scanf("%d", &iValue);

    iRet = Count(iValue);                //Function call
    printf("%d", iRet);

    return 0;                            //Return success to os
}