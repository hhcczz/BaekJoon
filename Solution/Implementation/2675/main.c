int main()
{
    int T;
    int R;
    char Arr[2000];

    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R, Arr);
        for (int k = 0; Arr[k] != '\0'; k++)
        {
            for (int j = 0; j < R; j++)  printf("%c", Arr[k]);
        }
        putchar('\n');
    }

    return 0;
}
