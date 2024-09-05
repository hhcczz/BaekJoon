int main()
{
    int N, M;

    int N_Arr[101][101];
    int M_Arr[101][101];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &N_Arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &M_Arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", N_Arr[i][j] + M_Arr[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
