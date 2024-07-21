int main()
{
    char Arr[1000000];
    int cnt = 0;
    int len;

    scanf("%[^\n]s", Arr);
    
    len = strlen(Arr);

    if (len == 1)
    {
        if (Arr[0] == ' ')
        {
            printf("0");
            return 0;
        }
    }

    for (int i = 1; i < len - 1; i++) { 
        if (Arr[i] == ' ')  cnt++;
    }

    printf("%d", cnt + 1);

    return 0;
}
