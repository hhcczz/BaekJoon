#include <stdio.h>
#include <string.h>

int main()
{
    int Arr[1001];
    
    int N;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) scanf("%d", &Arr[i]);
    
    for(int i = 0; i < N; i++)
    {
        for(int j = i; j < N; j++)
        {
            if(Arr[j] < Arr[i])
            {
                int a;
                a = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = a;
            }
        }
    }
    
    for(int i = 0; i < N; i++) printf("%d\n", Arr[i]);
    
    return 0;
}
