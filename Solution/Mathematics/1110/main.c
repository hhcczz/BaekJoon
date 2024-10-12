#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int C;
    int cnt = 0;
    
    scanf("%d", &N);
    
    int Default_N = N;
    
    while(1)
    {
        if(N == 0)
        {
            cnt++;
            break;
        }
        
        C = N / 10 + N % 10;
        if(C >= 10) N = C % 10 + N % 10 * 10;
        else N = N % 10 * 10 + C;
        
        cnt++;
        
        if(Default_N == N) break;
    }
    
    printf("%d", cnt);
    
    return 0;
}
