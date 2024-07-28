#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int tempa, tempb;

    //백의자리 > 1의자리, 1의자리 > 100의자리 // 1의자리,
    tempa = (a / 100) + (a % 10 * 100) + (a % 100 - a % 10);
    tempb = (b / 100) + (b % 10 * 100) + (b % 100 - b % 10);
    
    if (tempb > tempa)
    {
        swap(&tempa, &tempb);
    }

    printf("%d", tempa);

    return 0;
}

//135 
// /에 관한 것 135/100 = 1 ,,, 135 / 10 = 13   
// %에 관한 것 135 % 100 = 35 ,,, 135 % 10 = 5 