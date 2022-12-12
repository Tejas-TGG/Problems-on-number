// Write program which accept number from user and check whether it contain 0 or not .


// Inclusion of header file 
#include <stdio.h>
#include <stdbool.h>
///////////////////////////////////////////////////////////////
//
// Program
//
//
/////////////////////////////////////////////////////////////

// Typedef
#define TRUE 1
#define FALSE 0

bool ChkZero(int iNo)
{
    // Local variable intilization
    int iDigit = 0;
    int iFlag = FALSE;

    // Input updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            iFlag = TRUE;
            break;
        }
        iNo = iNo / 10;
    }

    return iFlag;
}

int main()
{
    // Local variables
    int iValue = 0;
    bool bRet = false;

    // Accept input
    printf("Enter a number :\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue); // Function call

    // Check Condition
    if (bRet == true)
    {
        printf("%d contains 0", iValue);
    }
    else
    {
        printf("%d not contains 0", iValue);
    }

    return 0; // Return success to OS
}

// Time Complexity  : O(n)
// Where n = Number of digits