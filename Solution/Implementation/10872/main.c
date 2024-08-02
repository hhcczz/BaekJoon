#include <stdio.h>

int main()
{
    int a;
    int Result = 1;
    
    scanf("%d", &a);
    
    for(int i = 1; i <= a; i++) Result *= i;
    
    printf("%d", Result);

    return 0;
}
