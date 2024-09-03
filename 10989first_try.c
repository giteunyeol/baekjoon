#include <stdio.h>
#include <stdlib.h>
//메모리 제한으로 실패
int main(void)
{
    int n;
    scanf("%d", &n);
    int * numbers = (int*) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 1; i < n; i++)
    {
        while(numbers[i] < numbers[i-1])
        {
            int temp;
            temp = numbers[i];
            numbers[i] = numbers[i-1];
            numbers[i-1] = temp;
            i--;
            if(i == 0)
            {
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
    free(numbers);

    return 0;
}