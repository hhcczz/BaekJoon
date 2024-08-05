int main()
{
    int N;
    int integer[1000];
    int v;
    int cnt = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d ", &integer[i]);
    scanf("%d", &v);

    for (int i = 0; i < N; i++) if (integer[i] == v) cnt++;
    printf("%d", cnt);

    return 0;
}
