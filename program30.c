// accept number from user ,return  even digits from that number....
// Input : 7856
// Output :
// 6    8


#include <stdio.h>

void DisplayEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        
        if (iDigit % 2 == 0)
        {
            printf("%d\n", iDigit); 
        }

        iNo = iNo / 10;
    }
      
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :\n");
    scanf("%d", &iValue);
    DisplayEven(iValue);
   
   

    return 0;
}