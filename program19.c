// count the factors
// input=8
//output=3

#include <stdio.h>
#include <stdbool.h>

int Countfactor(int iNo)
{
    int iCnt = 0;
    int ifactCnt = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            ifactCnt++;
        }
    }
    return ifactCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    iRet = Countfactor(iValue);
    printf("count of factor are %d \n", iRet);

    return 0;
}
