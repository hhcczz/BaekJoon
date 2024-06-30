#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char Min_A[1000001], Min_B[1000001];
    char Max_A[1000001], Max_B[1000001];
    
    char a[1000001];
    char b[1000001];
    
    int R_Min;
    int R_Max;
    
    scanf("%s", a);
    scanf("%s", b);
    
    strcpy(Min_A, a);
    strcpy(Min_B, b);
    strcpy(Max_A, a);
    strcpy(Max_B, b);
    
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == '6') Min_A[i] = '5';
        if(b[i] == '6') Min_B[i] = '5';
        
        if(a[i] == '5') Max_A[i] = '6';
        if(b[i] == '5') Max_B[i] = '6';
        
    }
    
    R_Min = atoi(Min_A) + atoi(Min_B);
    R_Max = atoi(Max_A) + atoi(Max_B);
    
    printf("%d %d", R_Min, R_Max);

    return 0;
}
