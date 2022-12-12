// accept number from user ,return number of digits from that number....

#include <stdio.h>
// Input : 7856
// Output :
// 4

int CountDigits(int iNo)
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
        iCount++;
        iNo=iNo/10;
       
     
    }
    return iCount;
}

int main()
{ 
    int iValue = 0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    iRet=CountDigits(iValue);
    printf("%d",iRet);

    return 0;
}

