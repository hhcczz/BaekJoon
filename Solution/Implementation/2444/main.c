int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = N - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    for (int i = N - 1; i > 0; i--)
    {
        for (int j = N - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}
