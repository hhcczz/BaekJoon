int main()
2
{
3
    char Arr[1000001];
4
    int Arr_Check[26];
5
    int MAX = 0;
6
    int size;
7
    char Ans;
8
​
9
    scanf("%s", Arr);
10
    size = strlen(Arr);
11
​
12
    //  알파벳 소문자로 변경작업
13
    for (int i = 0; i < size; i++)
14
    {
15
        if (Arr[i] >= 'a') Arr_Check[Arr[i] - 'a']++;
16
        else Arr_Check[Arr[i] - 'A']++;
17
    }
18
​
19
    for (int i = 0; i < 26; i++)
20
    {
21
        if (Arr_Check[i] == MAX)
22
        {
23
            Ans = '?';
24
        }
25
        else if(Arr_Check[i] > MAX)
26
        {
27
            MAX = Arr_Check[i];
28
            Ans = 'A' + i;
29
        }
30
    }
31
    printf("%c", Ans);
32
​
33
    return 0;
34
}
