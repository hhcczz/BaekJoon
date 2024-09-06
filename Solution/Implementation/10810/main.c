int main()
{
    int N, M;
    int Arr[200][3];

    scanf("%d %d", &N, &M);
    int Result_Arr[1000] = { 0 };

    for (int i = 0; i < M; i++) scanf("%d %d %d", &Arr[i][0], &Arr[i][1], &Arr[i][2]);

    for (int i = 0; i < M; i++)
    {
        for (int j = Arr[i][0]; j <= Arr[i][1]; j++)
        {
            Result_Arr[j - 1] = Arr[i][2];
        }
        
    }
    for (int i = 0; i < N; i++) printf("%d ", Result_Arr[i]);

    return 0;
}
