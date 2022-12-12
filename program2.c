// Accept number from user and check whhether it is even or not!!!
#include <stdio.h>
#include <stdbool.h>

bool chkEven(int ino)
{
    if ((ino % 2) == 0)
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
    int ivalue = 0;
    bool bret = false;          //false means 0...

    printf("enter a number :\n");
    scanf("%d", &ivalue);
    bret = chkEven(ivalue);
    if (bret==true)
    {
        printf("%d is even number ",ivalue);
    }

    else{

        printf("%d is odd number",ivalue);
    }

    return 0;
}