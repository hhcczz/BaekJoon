int main()
{
    int N, M;
    int Arr[200][2];
    int Save_Arr = 0;

    scanf("%d %d", &N, &M);
    int Result_Arr[1000] = { 0 };

    for (int i = 0; i < sizeof(Result_Arr) / 4; i++) Result_Arr[i] = i+1;
    
    for (int i = 0; i < M; i++) scanf("%d %d", &Arr[i][0], &Arr[i][1]);
    
    for (int i = 0; i < M; i++)
    {
        Save_Arr = Result_Arr[Arr[i][0] - 1];
        Result_Arr[Arr[i][0] - 1] = Result_Arr[Arr[i][1] - 1];
        Result_Arr[Arr[i][1] - 1] = Save_Arr;
        
    }
    for (int i = 0; i < N; i++) printf("%d ", Result_Arr[i]);

    return 0;
}
