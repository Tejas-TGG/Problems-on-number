// Write program which accept number from user and return multipication of all digits....


// Inclusion of heder file..
#include <stdio.h>

////////////////////////////////////////////////////////
//
//
//           Program......
//
//
////////////////////////////////////////////////////////

int MultDigit(int iNo)
{
    //Local variable initializations:
    int iDigit = 0;
    int iMult=1;
    
    //Input updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit==0)
        {
            iDigit++;
        }
        
        iMult=iMult*iDigit;
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    // Local variable 
    int iValue = 0;
    int iRet = 0;

    // Accept Input
    printf("Enter a number :\n");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);                // Function Call
    printf("%d", iRet);                      // Return success to Os

    return 0;
}