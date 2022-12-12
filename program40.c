// accept number from user and check whether it is amstrong number or not.....
// input=1634
// Output 1^4+6^4+3^4+4^4=1634

// input=153
// Output 1^3+5^3+3^3=153

#include <stdio.h>
#include <stdbool.h>

bool chkarmstrong(int iNo)
{
    int iDigcnt = 0;
    int iDigit = 0;
    int iCnt = 0;
    int itemp = 0;
    int iMult = 1;
    int isum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    itemp = iNo;
    int itempi = iNo;


    while (iNo > 0)
    {
        iDigcnt++;
        iNo = iNo / 10;
    }

    // iNo = itemp;

    while (itemp > 0)
    {

        iDigit = itemp % 10;
        int iMult = 1; //   this will be very imp because if we didnt initialize it to 1 then iMult value will be copied

        for (iCnt = 1; iCnt <= iDigcnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }

        isum = isum + iMult;

        itemp = itemp / 10;
    }

    if (isum == itempi)
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
    int bRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);
    bRet = chkarmstrong(iValue);
    if (bRet == true)
    {
        printf("%d is armstrong number ", iValue);
    }
    else
    {
        printf("%d is not armstrong  number ", iValue);
    }

    return 0;
}
