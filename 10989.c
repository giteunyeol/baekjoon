// 버블정렬으로 풀기

#include <stdio.h>

int main(void)
{
    int n;
    int number[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

// ------------number[i] 에 n개만큼 scanf를 받음------

// 버블정렬
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(number[j] > number[j+1])
            {
                int temp;
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }

    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", number[i]);
    } 

    return 0;
}