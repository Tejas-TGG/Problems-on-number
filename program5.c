// Accept number from user and select his category form below classes

/*
0 to 35         fail
35 to 50        pass class
50 to 60        second class
60 to 70        first class
70 to 100       first class with distinction
*/

#include <stdio.h>

void DisplayClass(float fmarks)
{
    if ((fmarks > 0) && (fmarks < 35.0))
    {
        printf("you are fail");
    }

    else if ((fmarks >= 35.0) && (fmarks < 50.0))
    {
        printf("pass class");
    }
    else if ((fmarks >= 50.0) && (fmarks < 60.0))
    {
        printf("second class");
    }
    else if ((fmarks >= 60.0) && (fmarks < 70.0))
    {
        printf("first class");
    }

    else if ((fmarks >= 70.0) && (fmarks <=100.0))
    {
        printf("first class with distinction");
    }

    else
    {
        printf("invalid marks ");

    }
}

int main()
{
    float fvalue = 0.0;
    printf("enter the percentage :");

    scanf("%f", &fvalue);

    DisplayClass(fvalue);

    return 0;
}