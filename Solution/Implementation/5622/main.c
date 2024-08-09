int main()
{
    char Arr_1[1000];
    int len;
    int time = 0;

    scanf("%s", Arr_1);
    len = strlen(Arr_1);

    for (int i = 0; i < len; i++)
    {
        if (Arr_1[i] == 'W' || Arr_1[i] == 'X' || Arr_1[i] == 'Y' || Arr_1[i] == 'Z') time += 10;
        else if (Arr_1[i] == 'T' || Arr_1[i] == 'U' || Arr_1[i] == 'V') time += 9;
        else if (Arr_1[i] == 'P' || Arr_1[i] == 'Q' || Arr_1[i] == 'R' || Arr_1[i] == 'S') time += 8;
        else if (Arr_1[i] == 'M' || Arr_1[i] == 'N' || Arr_1[i] == 'O') time += 7;
        else if (Arr_1[i] == 'J' || Arr_1[i] == 'K' || Arr_1[i] == 'L') time += 6;
        else if (Arr_1[i] == 'G' || Arr_1[i] == 'H' || Arr_1[i] == 'I') time += 5;
        else if (Arr_1[i] == 'D' || Arr_1[i] == 'E' || Arr_1[i] == 'F') time += 4;
        else if (Arr_1[i] == 'A' || Arr_1[i] == 'B' || Arr_1[i] == 'C') time += 3;
    }

    printf("%d", time);

    return 0;
}
