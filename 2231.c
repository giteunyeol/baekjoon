#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i < n; i++)
    {
        int temp = i;
        int number = i;

        while(temp > 0)
        {
            number += temp % 10;
            temp = temp / 10;
        }
        if(n == number)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");

    return 0;
}