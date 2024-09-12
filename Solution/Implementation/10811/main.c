int main()
{
    int N, M;
    int Arr[200][2];
    int Save_Arr = 0;

    scanf("%d %d", &N, &M);
    int Result_Arr[101] = { 0 };
    for (int i = 0; i < M; i++) scanf("%d %d", &Arr[i][0], &Arr[i][1]);

    for (int i = 0; i < 101; i++) Result_Arr[i] = i;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j <= (Arr[i][1] - Arr[i][0]) / 2; j++)
        {
            Save_Arr = Result_Arr[Arr[i][0] + j];
            Result_Arr[Arr[i][0] + j] = Result_Arr[Arr[i][1] - j];
            Result_Arr[Arr[i][1] - j] = Save_Arr;
        }
    }
    for (int i = 1; i <= N; i++) printf("%d ", Result_Arr[i]);

    return 0;
}
