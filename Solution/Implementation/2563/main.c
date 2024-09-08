int main()
{
    int Arr[101][101] = { 0, };
    int N, X, Y, Ans = 0;
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &X, &Y);
        for (int j = Y; j < Y + 10; j++)
        {
            for (int k = X; k < X + 10; k++)
            {
                Arr[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
        {
            if (Arr[i][j] == 1) Ans++;
        }


    printf("%d", Ans);
    return 0;
}
