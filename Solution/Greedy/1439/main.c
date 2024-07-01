#include <stdio.h>
#include <string.h>

int main()
{
    char Arr[1000001];
    
    int cnt = 0;
    
    scanf("%s", Arr);
    
    
    for(int i = 0; i < strlen(Arr); i++)
    {
        if(Arr[i - 1] != Arr[i]) cnt++;
    }

    printf("%d", cnt / 2);
    return 0;
}
