// Accept number from user and check whether it is prime number or not.

// input:   5
// Output : 5 is prime number

#include <stdio.h>
#include <stdbool.h>

int Countfactor(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int ifactCnt = 0;

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            ifactCnt++;
        }
    }
    return ifactCnt;
}

bool CheckPrime(int iNo)
{
    int iret = 0;
    iret = Countfactor(iNo);

    if (iret == 0)
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
    bool bRet = false;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    bRet = CheckPrime(iValue);
    if (bRet == true)
    {
        printf("%d is prime number ", iValue);
    }

    else
    {
        printf("%d  is not prime number :", iValue);
    }

    return 0;
}