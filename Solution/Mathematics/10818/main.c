int main()
{
    int N;
    int N_Arr[1000010];
    int Max, Min;


    scanf("%d", &N);
    for (int i = 0; i < N; i++)  scanf("%d", &N_Arr[i]);
    Max = N_Arr[0];
    Min = N_Arr[0];

    for (int i = 1; i < N; i++) if (Max < N_Arr[i]) Max = N_Arr[i];
    for (int i = 1; i < N; i++) if (Min > N_Arr[i]) Min = N_Arr[i];

    printf("%d %d", Min, Max);


    return 0;
}
