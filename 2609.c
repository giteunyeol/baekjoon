#include <stdio.h>

// 최대 공약수
int max (int x, int y)
{
    if(y == 0)
    {
        return x;
    }

    return max(y, x % y);
}


int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int factors = max(a, b); //factors : 최대공약수

    int multiple = (a * b) / factors; // multiple : 최소공배수

    printf("%d\n%d", factors, multiple);


    return 0;
}