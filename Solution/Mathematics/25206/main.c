#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>



int main()
{
    float Credit;
    float Ans = 0;

    float Grade_init = 0;

    char Credit_Deep[100];
    char Name[1000];
    float Checking = 5.0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %f %s", Name, &Credit, Credit_Deep);
        if (!strcmp(Credit_Deep, "A+"))    Checking = 4.5;
        else if (!strcmp(Credit_Deep, "A0"))     Checking = 4.0;
        else if (!strcmp(Credit_Deep, "B+"))     Checking = 3.5;
        else if (!strcmp(Credit_Deep, "B0"))     Checking = 3.0;
        else if (!strcmp(Credit_Deep, "C+"))     Checking = 2.5;
        else if (!strcmp(Credit_Deep, "C0"))     Checking = 2.0;
        else if (!strcmp(Credit_Deep, "D+"))     Checking = 1.5;
        else if (!strcmp(Credit_Deep, "D0"))     Checking = 1.0;
        else if (!strcmp(Credit_Deep, "F"))    Checking = 0.0;
        else if (!strcmp(Credit_Deep, "P"))     continue;
        Ans += Credit * Checking;
        if(strcmp(Credit_Deep, "P"))    Grade_init += Credit;
    }
    if (Ans == 0) printf("%f", Ans);
    else printf("%f", Ans / Grade_init);

    return 0;
}
