int main()
{
    int N;
    int MAX = 0;
    int Arr[1001] = { 0 };
    double Ans = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d", &Arr[i]);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (MAX > Arr[i]) continue;
            MAX = Arr[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        Ans += (double)Arr[i] / MAX * 100;
    }

    printf("%lf", Ans / N);



    return 0;
}
