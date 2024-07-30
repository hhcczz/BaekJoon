int main()
{
    char Arr[1000001];
    int Arr_Check[26];
    int MAX = 0;
    int size;
    char Ans;

    scanf("%s", Arr);
    size = strlen(Arr);

    //  알파벳 소문자로 변경작업
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] >= 'a') Arr_Check[Arr[i] - 'a']++;
        else Arr_Check[Arr[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (Arr_Check[i] == MAX)
        {
            Ans = '?';
        }
        else if(Arr_Check[i] > MAX)
        {
            MAX = Arr_Check[i];
            Ans = 'A' + i;
        }
    }
    printf("%c", Ans);

    return 0;
}
