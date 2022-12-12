// Write a program which accept number from user and display its multiplication of factors.

#include <stdio.h>

int MultFact(int iNo)
{
    int iAns = 1;
    int icnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (icnt = 1; icnt <= (iNo/2); icnt++)
    {
        if (iNo % icnt == 0)
        {

            iAns = iAns * icnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :");
    scanf("%d", &iValue);
    iRet = MultFact(iValue);
    printf("Multiplication is :\n %d", iRet);

    return 0;
}