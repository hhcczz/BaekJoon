int main()
{
    int Check = 0;
    int cnt = 0;
    int Min = 0;
    int Result_Arr[3] = { 0 };
    int Student_Arr[31] = { 0 };
    int Save = 0;

    for (int i = 0; i < 28; i++) scanf("%d", &Student_Arr[i]);

    for (int i = 1; i < 31; i++)
    {
        cnt = 0;
        for (int j = 0; j < 28; j++)
        {
            if (Student_Arr[j] == i)
            {
                cnt++;
            }
        }
        if (cnt >= 1) continue;
        Result_Arr[Check] = i;
        Check++;

    }
    
    if (Result_Arr[0] > Result_Arr[1])
    {
        Save = Result_Arr[1];
        Result_Arr[1] = Result_Arr[0];
        Result_Arr[0] = Save;
    }

    for (int i = 0; i < 2; i++) printf("%d\n", Result_Arr[i]);

    return 0;
}
