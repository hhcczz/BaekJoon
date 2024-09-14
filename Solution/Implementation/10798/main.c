int main()
{
    char Arr[5][36] = {};

    for (int i = 0; i < 5; i++)
    {
        scanf(" %s", Arr[i]);
    }

    for (int i = 0; i < 17; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(Arr[j][i] != '\0') printf("%c", Arr[j][i]);
        }
    }


    return 0;
}
