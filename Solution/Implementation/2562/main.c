int main()
{
    int N_Arr[10];
    int Max, Max_Which;

    for (int i = 0; i < 9; i++)  scanf("%d", &N_Arr[i]);
    Max = N_Arr[0];
    Max_Which = 1;

    for (int i = 1; i < 9; i++)
    {
        if (Max < N_Arr[i])
        {
            Max = N_Arr[i];
            Max_Which = i + 1;
        }
    }
    printf("%d\n", Max);
    printf("%d", Max_Which);


    return 0;
}
