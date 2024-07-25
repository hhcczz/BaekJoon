#include <stdio.h>

int main()
{
    int a,b,c;
    int num;
    int Arr[11] = {0};
    
    scanf("%d %d %d", &a, &b, &c);
    
    num = a * b * c;
    
    for(int i = num; i > 0; i/=10) Arr[i%10]++;
    
    for(int i = 0; i < 10; i++) printf("%d\n", Arr[i]);

    return 0;
}
