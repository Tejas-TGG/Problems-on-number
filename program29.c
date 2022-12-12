// accept number from user ,return sum of  digits from that number....
// Input : 7856
// Output :
// 26


#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit=0;
    int iCount = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo > 0)
    {
        iDigit=iNo%10;
        iCount=iCount+iDigit;
        iNo =iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    iRet=SumDigits(iValue);
    printf("sum of digit is %d",iRet);

    return 0;
}
