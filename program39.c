// accept number from user and check whether it is amstrong number or not.....
// input=1634
// Output 1^4+6^4+3^4+4^4=1634

// input=153
// Output 1^3+5^3+3^3=153

#include <stdio.h>
#include <stdbool.h>


int power(int iNo1, int iNo2)
{
    int iCnt = 0;
    register int iMult = 1;
    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }

    return iMult;
}

bool chkarmstrong(int iNo)
{
    int iDigcnt = 0;
    int iDigit = 0;
    int iCnt = 0;
    int itemp = 0;
    int isum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
   
    itemp=iNo;
    while (iNo > 0)
    {
        iDigcnt++;
        iNo = iNo / 10;
    }

    iNo=itemp;

        while (iNo > 0)
    {
        iDigit = iNo % 10;

        isum=isum+power(iDigit,iDigcnt);

        iNo = iNo / 10;
    }

    if(isum==itemp)
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
















      