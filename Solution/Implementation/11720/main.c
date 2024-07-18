int main()
{
    int N;
    int SUM = 0;
    char Arr[101];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) scanf(" %c", &Arr[i]);


    for (int i = 0; i < N; i++) SUM += (char)Arr[i] - 48;

    printf("%d", SUM);

    return 0;
}
