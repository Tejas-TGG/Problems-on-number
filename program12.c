// Accept number from user and check whether it is perfect number.

// perfect number 6=1+2+3
// perfect number 28=1+2+4+7+14

#include <stdio.h>
#include <stdbool.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

bool CheckPerferct(int iNo)
{
    int iAns=0;
    iAns=SumFactor(iNo);
    if (iAns == iNo)
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
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    iRet = CheckPerferct(iValue);
    if (iRet == true)
    {
        printf("%d is perfect number ", iValue);
    }
    else
    {
        printf("%d is not perfect number ", iValue);
    }

    return 0;
}