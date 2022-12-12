// accept number ,and it is divisible by 3 and 5
#include <stdio.h>
#include <stdbool.h>

bool chkDiv(int ino)
{
    if (
        ((ino % 3) == 0) && 
        ((ino % 5) == 0)
        )
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
    bret = chkDiv(ivalue);
    if (bret==true)
    {
        printf("%d is divisible by 3 & 5 \n",ivalue);
    }

    else{

        printf("%d is not divisible by 3 & 5 \n",ivalue);
    }

    return 0;
}