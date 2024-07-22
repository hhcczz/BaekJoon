int main()
{
    char Arr[101];
    int alphabet[26];
    int len, index;

    scanf("%s", Arr);

    for (int i = 0; i < 26; i++)    alphabet[i] = -1;

    len = strlen(Arr);

    for (int i = 0; i < len; i++) {
        index = Arr[i] - 'a';
        if (alphabet[index] != -1)
        {
            continue;
        }
        alphabet[index] = i;
            
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    return 0;
}
