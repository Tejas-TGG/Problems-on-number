// Write program which accept number from user and count frequency of such digit which are less than 6 .


// Inclusion of header file......
#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Program
//
//
///////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    // Local variables initialization
    int iDigit = 0;
    int ifreq = 0;

    // Input Updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
        {
            ifreq++;
        }
        iNo = iNo / 10;
    }
    return ifreq;
}

int main()
{
    // local variables.....
    int ivalue = 0;
    int iRev = 0;

    // Accept  Input.....

    printf("Enter a number :\n");
    scanf("%d", &ivalue);
    iRev = CountTwo(ivalue); // Function call.......

    printf("%d", iRev); // Print Result........

    return 0; // Return success to os.....
}