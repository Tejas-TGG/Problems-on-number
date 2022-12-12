// Write program which accept number from user and display its digits in reverse order.


// Inclusion of header file......
#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Program
//
//
///////////////////////////////////////////////////////////////

void  DisplayDigit(int iNo)
{
    //Local Variable 
    int iDigit = 0;

    //Input  updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    //logic
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{

    //Local variable..
    int ivalue = 0;
    // Accept Input:
    printf("Enter a number :\n");
    scanf("%d", &ivalue);

    DisplayDigit(ivalue);               //Function call....
    return 0;                           // Return success to os
}