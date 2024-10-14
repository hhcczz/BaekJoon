int main()
{
    char Arr_1[1000], Arr_2[1000];
    int Sum_A1 = 0, Sum_A2 = 0;

    scanf("%s %s", Arr_1, Arr_2);

    Sum_A1 = (Arr_1[2] - '0') * 100 + (Arr_1[1] - '0') * 10 + (Arr_1[0] - '0');
    Sum_A2 = (Arr_2[2] - '0') * 100 + (Arr_2[1] - '0') * 10 + (Arr_2[0] - '0');

    if (Sum_A1 > Sum_A2) printf("%d", Sum_A1);
    else printf("%d", Sum_A2);

    return 0;
}
