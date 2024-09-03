#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // LEVEL
    char Arr[5000];
    int len;
    bool check = true;
    scanf("%s", Arr);
    len = strlen(Arr);
    if (len % 2 != 0) len = (len + 1) / 2;
    else len /= 2;

    for (int i = 0; i < len; i++)
    {
        if (Arr[i] != Arr[strlen(Arr) - 1 - i]) check = false;
    }

    if (check == true) printf("1");
    else printf("0");
    return 0;
}
