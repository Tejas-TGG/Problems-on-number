//  Accept one number and check whether it is divisible by 5 or not.

#include <stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL Check(int iNo)
{
    if ((iNo % 5 == 0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int ivalue = 0;

    BOOL bRet = FALSE;
    printf("Enter number :");
    scanf("%d", &ivalue);

    bRet = Check(ivalue);

    if (bRet == 1)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}