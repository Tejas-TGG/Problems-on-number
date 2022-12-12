// Accept number from user and check whether it is perfect number or not.

// perfect number 6=1+2+3
// perfect number 28=1+2+4+7+14

#include <stdio.h>
#include <stdbool.h>

bool CheckPerferct(int iNo)
{
    int iCnt = 0;
    int isum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            isum = isum + iCnt; // for update value of isum should be written as "isum="
        }

        if(isum>iNo)                               //this is for optimize the code.....
        {
            break;

        }
    }

    if (isum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    iRet = CheckPerferct(iValue);
    if (iRet == true)
    {
        printf("%d is perfect number ", iValue);
    }

    else
    {
        printf("%d  is not perfect number :",iValue);

    }

    return 0;
}

